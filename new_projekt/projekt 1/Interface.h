#pragma once
#include "File.h"
#include"Folder.h"
#include<stdio.h>
#include<direct.h>
#include"Header.h"
#include"Interface.cpp"
#include <iostream>
#include<Windows.h>
#include<io.h>
#include <sstream>

using namespace std;

class UserInterface
{
public:
	UserInterface() : file{},folder{} {}

	void run()
	{
		bool mainOn = true, buyOn = true;
		string extension;
		char Help[110];
		char Help_r[110];
		bool chek{false};
		string name{};
		string new_name{};
		string new_place{};
		string path{};
		int opt{};
		char systemString[200] = "rmdir /s /q ";

		while (mainOn)
		{
			
		   system("cls");
			cout <<"\n(1) exit\n"
				<< "(2) create    : {folder|file}\n"
				<< "(3) delete    : {folder|file}\n"
				<< "(4) rename    : {folder|file}\n"
				<< "(5) move      : {folder|file}\n"
				<< "(6) calculate : {folder|file}\n"
				<< "(7) search    : {folder|file}\n"
				<< "\n\tchoice : ";
			cin >> opt;
			switch (opt)
			{
			case 1:
				inter.turn();
				mainOn = false;
				break;

			case 2:
				chek = inter.ch();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					file.create(name,path);
				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					folder.create(name, path);
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 3:
				chek = inter.ch1();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					file.reMove(name, path);
				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					folder.reMove(name, path);
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 4:
				chek = inter.ch2();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new name : ";
					cin >> new_name;		
					file.reName(name, path, new_name);
				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new name : ";
					cin >> new_name;
					folder.reName(name, path, new_name);
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 5:
				chek = inter.ch3();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new place : ";
					cin >> new_place;
					file.move(name, path, new_place);

				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new place : ";
					cin >> new_place;
					folder.move(name, path, new_place);
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 6:
				chek = inter.ch4();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					file.size(name, path);

				}
				else if ( chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					folder.size(name, path);					
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 7:
				cout << "Enter extension : ";
				cin >> extension;
				cout << "Enter path : ";
				cin >> path;
				file.search(extension, path);
				break;
			}
		}
	}
private:
	File file;
	Folder folder;
	UserInterfaces inter;
};

