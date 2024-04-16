#pragma once
#include"Interface.h"
#include<Windows.h>

bool ch()
{
	int opt;
	cout << "\n1)Creat file\n"
		<< "2)Creat folder\n"
		<< "\tchoice : ";
	cin >> opt;
	if(opt == 1)
	{
		return true;
	}
	else if (opt == 2)
	{
		return false;
	}
}

bool ch1()
{
	int opt;
	cout << "\n1)Delete file\n"
		<< "2)Delete folder\n"
		<< "\tchoice : ";
	cin >> opt;
	if (opt == 1)
	{
		return true;
	}
	else if (opt == 2)
	{
		return false;
	}
}

bool ch2()
{
	int opt;
	cout << "\n1)Rename file\n"
		<< "2)Rename folder\n"
		<< "\tchoice : ";
	cin >> opt;
	if (opt == 1)
	{
		return true;

	}
	else if (opt == 2)
	{
		return false;
	}

}
bool ch3()
{
	int opt;
	cout << "\n1)Move file\n"
		<< "2)Move folder\n"
		<< "\tchoice : ";
	cin >> opt;
	if (opt == 1)
	{
		return true;

	}
	else if (opt == 2)
	{
		return false;
	}

}

bool ch4()
{
	int opt;
	cout << "\n1)Count file\n"
		<< "2)Count folder\n"
		<< "\tchoice : ";
	cin >> opt;
	if (opt == 1)
	{
		return true;

	}
	else if (opt == 2)
	{
		return false;
	}

}
bool ch5()
{
	int opt;
	cout << "\n1)Find file\n"
		<< "2)Find folder\n"
		<< "\tchoice : ";
	cin >> opt;
	if (opt == 1)
	{
		return true;

	}
	else if (opt == 2)
	{
		return false;
	}

}

void turn()
{
	system("cls");
	cout << "turning off ";
	Sleep(250);
	cout << ".";
	Sleep(250);
	cout << ".";
	system("cls");
	cout << "turnitng off ";
	Sleep(350);
	cout << ".";
	Sleep(250);
	cout << ".";
	Sleep(250);
	cout << ".\a";
}