#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct Employee
{
	string FIO;
	int salary;
	Employee *next;
};

void main()
{
	Employee *E, *Es;
	Es = new Employee;
	E = Es;
	while (1)
	{
		cout << "Input FIO\n";
		cin >> E->FIO;
		if ((E->FIO) == "xxx") break;
		cout << "Input salary for " + E->FIO + "\n";
		cin >> E->salary;
		system("cls");
		E->next = new Employee;
		E = E->next;

	}
	system("cls");
	E = Es;
	
	while (1)
	{
		cout << E->FIO + " " << E->salary << endl;
		E = E->next;
		if ((E->FIO) == "xxx") break;
	}

	system("pause");
	system("cls");
	int ssalary, counter=0;
	cout << "Set the salary" << endl;
	cin >> ssalary;

	E = Es;
	while (1)
	{
		if (E->salary > ssalary)
		{
			cout << E->FIO + " " << E->salary << endl;
			counter++;
		}
		E = E->next;
		if ((E->FIO) == "xxx") break;
	}
	cout << counter;
	cout << " have salary more than setted." << endl;
}
11
