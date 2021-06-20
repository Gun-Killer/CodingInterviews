#include "SpeechManager.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

SpeechManager::SpeechManager()
{
    init();
    createSpeaker();
}

void SpeechManager::showMenu()
{
    system("cls");
    cout << "***************************" << endl;
    cout << "*******1、开始演讲比赛*******" << endl;
    cout << "*******2、查看往届记录*******" << endl;
    cout << "*******3、清空比赛记录*******" << endl;
    cout << "*******0、退出比赛程序*******" << endl;
    cout << "***************************" << endl;
}

void SpeechManager::exit()
{
    system("pause");
    std::exit(0);

}

void SpeechManager::createSpeaker()
{
    string names = "ABCDEFGHIJKL";
    for (int i = 0; i < names.size(); i++)
    {
        Speaker sp;
        sp.m_name = string("选手") + names[i];
        sp.m_score[0] = 0.0;
        sp.m_score[1] = 0.0;
        m_v1.push_back(1001 + i);
        m_map.insert(make_pair(m_v1[i], sp));
    }
}

void SpeechManager::start()
{
    speechDraw();
    scoring();
    m_index++;
    speechDraw();
    scoring();

    sort(m_v3.begin(), m_v3.end());
    cout << "第一名" << endl;
    cout << "\t" << m_v3[1] << "\t" << m_map[m_v3[1]].m_name << "\t" << m_map[m_v3[1]].m_score[m_index - 1] << endl;

    saveFile();
    system("pause");
}

void SpeechManager::speechDraw()
{
    cout << "第" << m_index << "轮" << endl;
    if (m_index == 1)
    {
        random_shuffle(m_v1.begin(), m_v1.end());
        for (auto begin = m_v1.begin(); begin != m_v1.end(); begin++)
        {
            cout << "\t" << *begin;
        }
        cout << endl;
    }
    else
    {
        random_shuffle(m_v2.begin(), m_v2.end());
        for (auto begin = m_v2.begin(); begin != m_v2.end(); begin++)
        {
            cout << "\t" << *begin;
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
    system("pause");
    cout << endl;
}

void SpeechManager::scoring()
{
    vector<int>* p = &m_v2;
    if (m_index == 1)
    {
        p = &m_v1;
    }

    for (int i = 0; i < p->size(); i++)
    {
        m_map[(*p)[i]].m_score[m_index - 1] = newScore();
        cout << "\t" << (*p)[i] << "\t" << m_map[(*p)[i]].m_name << "\t" << m_map[(*p)[i]].m_score[m_index - 1] << endl;
    }

    auto end_index = (*p).size() / 2;
    vector<int> temp = vector<int>((*p));
    random_shuffle(temp.begin(), temp.end());
    multimap<double, int, greater<double>> temp_1;
    multimap<double, int, greater<double>> temp_2;
    for (int i = 0; i < end_index; i++)
    {
        temp_1.insert(make_pair(m_map[temp[i]].m_score[m_index], temp[i]));
        temp_2.insert(make_pair(m_map[temp[i + end_index]].m_score[m_index], temp[i + end_index]));
    }

    auto count = end_index / 2;
    vector<int>* p1 = &m_v2;
    if (m_index == 2)
    {
        p1 = &m_v3;
    }
    auto itr1 = temp_1.begin();
    auto itr2 = temp_2.begin();
    cout << "-------------------------------" << endl;
    for (int i = 0; i < count; i++)
    {
        p1->push_back(itr1->second);
        p1->push_back(itr2->second);

        cout << "\t" << itr1->second << "\t" << m_map[itr1->second].m_name << "\t" << m_map[itr1->second].m_score[m_index - 1] << endl;
        cout << "\t" << itr2->second << "\t" << m_map[itr2->second].m_name << "\t" << m_map[itr2->second].m_score[m_index - 1] << endl;
        itr1++;
        itr2++;
    }


    system("pause");
    cout << endl;
}

double SpeechManager::newScore()
{
    deque<double> score;

    for (int j = 0; j < 10; j++)
    {
        score.push_back((rand() / 41.0) + 60.0);
    }
    sort(score.begin(), score.end(), greater<double>());
    score.pop_back();
    score.pop_front();

    return accumulate(score.begin(), score.end(), 0.0) / score.size();
}

void SpeechManager::saveFile()
{
    ofstream file;
    file.open("123.csv", ios::out | ios::app);
    for (auto begin = m_v3.begin(); begin != m_v3.end(); begin++)
    {
        auto& temp = m_map[*begin];
        file << temp.m_name << "," << temp.m_score[1] << endl;
    }
    file.close();
}

SpeechManager::~SpeechManager()
{
}

void SpeechManager::init()
{
    m_v1.clear();
    m_v2.clear();
    m_v3.clear();
    m_map.clear();
    m_index = 1;
}
