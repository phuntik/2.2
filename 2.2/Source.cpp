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
		if ((E->FIO) == "0") break;
		cout << "Input salary for " + E->FIO + "\n";
		cin >> E->salary;
		system("cls");
		E->next = new Employee;
		E = E->next;

	}
	system("cls");
	
	E = Es;
	while (E)
	{
		if (E->FIO == "0") break;
		cout << E->FIO + " " << E->salary << endl;
		E = E->next;
	}

	system("pause");
	system("cls");
	int ssalary, counter=0;
	cout << "Set the salary" << endl;
	cin >> ssalary;

	E = Es;
	while (E)
	{
		if (E->salary > ssalary)
		{
			cout << E->FIO + " " << E->salary << endl;
			counter++;
			E = E->next;
		}
		else
		{
			E = E->next;
			delete E;
		}
		
	}
	cout << counter;
	cout << " have salary more than setted." << endl;
}
