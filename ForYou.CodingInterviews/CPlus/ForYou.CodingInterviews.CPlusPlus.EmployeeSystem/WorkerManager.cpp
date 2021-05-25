#include "WorkerManager.h"
#include <iostream>

using namespace std;

WorkerManager::WorkerManager()
{
    ifstream read_file;
    read_file.open(FILENAME, ios::in);
    if (read_file.is_open())
    {
        char end_char;
        read_file >> end_char;
        if (read_file.eof())
        {
            this->m_count = 0;
            this->m_array = NULL;
        }
        else
        {
            this->m_count = employeeCount();
            initFromFile();
        }
    }
    else
    {
        this->m_count = 0;
        this->m_array = NULL;
    }
    read_file.close();
}

void WorkerManager::showMenu()
{
    cout << "**********************************************************" << endl;
    cout << "******* Welcome To Use Employee Management System ********" << endl;
    cout << "******* 0.Exit   System                           ********" << endl;
    cout << "******* 1.Add    Employee                         ********" << endl;
    cout << "******* 2.Show   Employee Infomation              ********" << endl;
    cout << "******* 3.Delete Employee                         ********" << endl;
    cout << "******* 4.Modify Employee Infomation              ********" << endl;
    cout << "******* 5.Find   Employee                         ********" << endl;
    cout << "******* 6.Sort   By       Id                      ********" << endl;
    cout << "******* 7.Clear  All                              ********" << endl;
    cout << "**********************************************************" << endl;
}

void WorkerManager::exit()
{
    cout << "Welcome Next Use" << endl;
    system("pause");
    std::exit(0);
}

void WorkerManager::add()
{
    cout << "add count" << endl;
    int add_count;
    cin >> add_count;
    if (add_count < 1)
    {
        cout << "input error" << endl;
        system("pause");
        return;
    }

    int current_count = this->m_count + add_count;
    Worker** new_array = new Worker * [current_count];
    if (this->m_array != NULL)
    {
        for (int i = 0; i < this->m_count; i++)
        {
            new_array[i] = this->m_array[i];
        }
    }

    for (int i = this->m_count; i < current_count; i++)
    {
        int id;
        string name;
        int did;
        cout << "input id" << endl;
        cin >> id;
        cout << "input name" << endl;
        cin >> name;
        showDepartment();
        cout << "input depatment" << endl;
        cin >> did;

        switch (did)
        {
        case 1:
            new_array[i] = new Employee(id, name, 1);
            break;
        case 2:
            new_array[i] = new Manager(id, name, 2);
            break;
        case 3:
            new_array[i] = new Boos(id, name, 3);
            break;
        }
    }
    if (this->m_array != NULL)
    {
        delete[] this->m_array;
    }
    this->m_count = current_count;
    this->m_array = new_array;

    save();
}

void WorkerManager::showAll()
{
    if (m_count < 1)
    {
        return;
    }
    for (int i = 0; i < m_count; i++)
    {
        m_array[i]->showInfo();
    }
    system("pause");
    system("cls");
}

int WorkerManager::findIndex(int id)
{
    int index = -1;

    for (int i = 0; i < m_count; i++)
    {
        if (m_array[i]->m_id == id)
        {
            index = i;
        }
    }

    return index;
}

void WorkerManager::remove()
{
    int remove_id;
    cout << "Please Input Id" << endl;
    cin >> remove_id;
    int index = findIndex(remove_id);
    if (index < 0)
    {
        cout << "Not Found" << endl;
        consoleCls();
        return;
    }

    for (int i = index; i < m_count - 1; i++)
    {
        m_array[i] = m_array[i + 1];
    }
    delete m_array[m_count - 1];
    m_array[m_count - 1] = NULL;
    m_count--;

    save();

    consoleCls();
}

void WorkerManager::update()
{
    int update_id;
    cout << "Please Input Id" << endl;
    cin >> update_id;
    int index = findIndex(update_id);
    if (index < 0)
    {
        cout << "Not Found" << endl;
        consoleCls();
        return;
    }

    string name;
    int did;
    cout << "Input Name" << endl;
    cin >> name;
    cout << "Input Did" << endl;
    cin >> did;

    if (did == m_array[index]->m_did)
    {
        m_array[index]->m_name = name;
    }
    else
    {
        int id = m_array[index]->m_id;
        delete m_array[index];
        if (did == 1)
        {
            m_array[index] = new Employee(id, name, did);
        }
        else if (did == 2)
        {
            m_array[index] = new Manager(id, name, did);
        }
        else
        {
            m_array[index] = new Boos(id, name, did);
        }
    }

    save();
    consoleCls();
}

void WorkerManager::find()
{
    int id;
    cout << "Please Input Id" << endl;
    cin >> id;
    int index = findIndex(id);
    if (index < 0)
    {
        cout << "Not Found" << endl;
        consoleCls();
        return;
    }
    m_array[index]->showInfo();
    consoleCls();
}

void WorkerManager::sortById()
{
    if (this->m_count < 1)
    {
        return;
    }
    for (int i = 0; i < this->m_count; i++)
    {
        for (int j = i + 1; j < this->m_count; j++)
        {
            if (m_array[i]->m_id > m_array[j]->m_id)
            {
                Worker* cache = m_array[i];
                m_array[i] = m_array[j];
                m_array[j] = cache;
            }
        }
    }
    save();
}

void WorkerManager::clear()
{
    if (this->m_count < 1)
    {
        return;
    }
    for (int i = 0; i < m_count; i++)
    {
        if (m_array[i] != NULL)
        {
            delete m_array[i];
            m_array[i] = NULL;
        }
    }
    delete[] this->m_array;
    this->m_array = NULL;
    this->m_count = 0;
    save();
}


WorkerManager::~WorkerManager()
{
    if (this->m_array == NULL)
    {
        return;
    }
    for (int i = 0; i < m_count; i++)
    {
        if (m_array[i] != NULL)
        {
            delete m_array[i];
            m_array[i] = NULL;
        }
    }
    delete[] this->m_array;
    this->m_array = NULL;
}

void WorkerManager::showDepartment()
{
    cout << "1¡¢Employee" << endl;
    cout << "2¡¢Manager" << endl;
    cout << "3¡¢Boss" << endl;
}

void WorkerManager::save()
{
    ofstream save_file;
    save_file.open(FILENAME, ios::out);
    if (this->m_count < 1)
    {
        save_file.clear();
    }
    else
    {
        for (int i = 0; i < this->m_count; i++)
        {
            save_file << m_array[i]->m_id << " "
                << m_array[i]->m_name << " "
                << m_array[i]->m_did
                << endl;
        }
    }
    save_file.close();
}

int WorkerManager::employeeCount()
{
    ifstream read_file;
    read_file.open(FILENAME, ios::in);
    if (read_file.is_open() == false)
    {
        return 0;
    }

    int id;
    string name;
    int did;
    int count = 0;

    while (read_file >> id && read_file >> name && read_file >> did)
    {
        count++;
    }

    read_file.close();
    return count;
}

void WorkerManager::initFromFile()
{
    ifstream read_file;
    read_file.open(FILENAME, ios::in);
    if (read_file.is_open() == false)
    {
        return;
    }
    this->m_array = new Worker * [this->m_count];
    int id;
    string name;
    int did;
    int index = 0;

    while (read_file >> id && read_file >> name && read_file >> did)
    {
        if (did == 1)
        {
            m_array[index] = new Employee(id, name, did);
        }
        else if (did == 2)
        {
            m_array[index] = new Manager(id, name, did);
        }
        else
        {
            m_array[index] = new Boos(id, name, did);
        }
        index++;
    }

    /*for (int i = 0; i < m_count; i++)
    {
        m_array[i]->showInfo();
    }*/

    read_file.close();
}

void WorkerManager::consoleCls()
{
    system("pause");
    system("clse");
}
