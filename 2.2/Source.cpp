#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct Employee
{
	string FIO;
	int salary;
	Employee *next=NULL;
};

void main()
{
	Employee *E, *Estart, *Etemp;
	Estart = new Employee;
	E = Estart;
	string temp;
	bool first=true;
	while (1)
	{		
		cout << "Input FIO\n";
		cin >> temp;
		if ((temp) == "0") break;
		if (first == true)
		{
			Estart->FIO = temp;
			cout << "Input salary for " + Estart->FIO + "\n";
			cin >> Estart->salary;
			system("cls");
			first = false;
		}
		else
		{
			E->next = new Employee;
			E = E->next;
			E->FIO = temp;
			cout << "Input salary for " + E->FIO + "\n";
			cin >> E->salary;
			system("cls");
		}

	}
	system("cls");
	
	E = Estart;
	while (E)
	{
		cout << E->FIO + " " << E->salary << endl;
		if (E->next == NULL) break;
		E = E->next;
	}
	
	system("pause");
	system("cls");
	int ssalary, counter=0;
	cout << "Set the salary" << endl;
	cin >> ssalary;

	E = Estart;
	Etemp = E;
	while (E)
	{
		if (E->salary > ssalary)
		{
			cout << E->FIO + " " << E->salary << endl;
			counter++;
			if (E->next == NULL) break;
			Etemp = E;
			E = E->next;
		}
		else
		{
			if (E == Estart) // perviy
			{
				if (E->next == NULL) // perviy i edinstvenniy
				{
					delete E;
					break;
				}
				Estart = E->next;
				delete E;
				E = Estart;
				Etemp = E; //it will be used as link to the previous structure
			}
			
			if (E->next == NULL) // posledniy
			{
				delete E;
				Etemp->next = NULL;
				break;
			}
			
			Etemp->next = E->next; // v seredine
			delete E;
			E = Etemp->next;
		}

	}
	cout << counter;
	cout << " have salary more than setted." << endl;
}
