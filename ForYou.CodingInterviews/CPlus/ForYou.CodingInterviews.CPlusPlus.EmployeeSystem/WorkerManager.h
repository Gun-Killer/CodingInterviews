#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boos.h"
#include <fstream>

#define FILENAME "info.txt"

using namespace std;

class WorkerManager
{
public :
	WorkerManager();


	void showMenu();

	void exit();

	void add();


	~WorkerManager();

private:
	int m_count;
	Worker** m_array;

	void showDepartment();

	void save();
};

