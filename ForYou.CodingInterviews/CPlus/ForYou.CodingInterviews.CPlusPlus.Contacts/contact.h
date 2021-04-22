#pragma once
#include <string>
using namespace std;

struct contactInfo
{
	string name;
	int age;
	string phone;
};

void show_operate();

int read_input();

contactInfo add_contact();

void save_contact(struct contactInfo contacts[], int len, contactInfo contact);

void delete_contanct(struct contactInfo contancts[], int len);