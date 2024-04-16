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
		bool chek{};
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
				turn();
				mainOn = false;
				break;

			case 2:
				chek = ch();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					file.setPath(path);
					file.setName(name);
					ostringstream ss;
					ss << file.getPath() << "\\" << file.getName() <<".txt";
					string s = ss.str();
					strcpy_s(Help, s.c_str());
					ofstream oFile(Help);
				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					folder.setPath(path);
					folder.setName(name);
					ostringstream ss;
					ss << folder.getPath() << "\\" << folder.getName();
					string s = ss.str();
					strcpy_s(Help, s.c_str());
					int res = _mkdir(Help);
					cout << ((res ? "CAN'T CREAT" : "CREATED SUCCESSFULLY"));
					Sleep(1500);
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 3:
				chek = ch1();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					file.setPath(path);
					file.setName(name);
					ostringstream ss;
					ss << file.getPath() << "\\" << file.getName() << ".txt";
					string s = ss.str();
					strcpy_s(Help, s.c_str());
					int res = remove(Help);
					cout << ((res ? "CAN'T REMOVE" : "REMOVED SUCCESSFULLY"));
					Sleep(1500);

				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					folder.setPath(path);
					folder.setName(name);
					ostringstream ss;
					ss << folder.getPath() << "\\" << folder.getName();
					string s = ss.str();
					strcpy_s(Help, s.c_str());
					strcat_s(systemString, Help);
					system(systemString);
					system("CLS");
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 4:
				chek = ch2();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new name : ";
					cin >> new_name;
					file.setPath(path);
					file.setName(name);
					ostringstream ss, rr;
					ss << file.getPath() << "\\" << file.getName() << ".txt";
					rr << file.getPath() << "\\" << new_name << ".txt";
					string s = ss.str();
					string r = rr.str();
					strcpy_s(Help, s.c_str());
					strcpy_s(Help_r, r.c_str());
					int res = rename(Help, Help_r);
					cout << ((res ? "CAN'T RENAME" : "RENAMED SUCCESSFULLY"));
					Sleep(1500);

				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new name : ";
					cin >> new_name;
					folder.setPath(path);
					folder.setName(name);
					ostringstream ss, rr;
					ss << folder.getPath() << "\\" << folder.getName();
					rr << folder.getPath() << "\\" << new_name;
					string s = ss.str();
					string r = rr.str();
					strcpy_s(Help, s.c_str());
					strcpy_s(Help_r, r.c_str());
					int res = rename(Help, Help_r);
					cout << ((res ? "CAN'T RENAME" : "RENAMED SUCCESSFULLY"));
					Sleep(1500);
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 5:
				chek = ch3();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new place : ";
					cin >> new_place;
					file.setPath(path);
					file.setName(name);
					ostringstream ss, rr;
					ss << file.getPath() << "\\" << file.getName() << ".txt";
					rr << new_place << "\\" << name;
					string s = ss.str();
					string r = rr.str();
					strcpy_s(Help, s.c_str());
					strcpy_s(Help_r, r.c_str());
					int res = rename(Help, Help_r);
					cout << ((res ? "CAN'T MOVE" : "MOVED SUCCESSFULLY"));
					Sleep(1500);

				}
				else if (chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					cout << "Enter new place : ";
					cin >> new_place;
					file.setPath(path);
					file.setName(name);
					ostringstream ss, rr;
					ss << file.getPath() << "\\" << file.getName();
					rr << new_place << "\\" << name;
					string s = ss.str();
					string r = rr.str();
					strcpy_s(Help, s.c_str());
					strcpy_s(Help_r, r.c_str());
					int res = rename(Help, Help_r);
					cout << ((res ? "CAN'T MOVE" : "MOVED SUCCESSFULLY"));
					Sleep(1500);
				}
				else
				{
					cout << "\n!* wrong letter\a";
					Sleep(1500);
				}
				break;

			case 6:
				chek = ch4();
				if (chek == true)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					file.setPath(path);
					file.setName(name);
					ostringstream ss;
					ss << file.getPath() << "\\" << file.getName() << ".txt";
					string s = ss.str();
					strcpy_s(Help, s.c_str());
					_finddata_t fileInfo;
					auto res = _findfirst(Help, &fileInfo);
					if (res != -1)
					{
						cout << "FILE SUCCESSFULLY FIND";
						Sleep(1240);
						system("cls");
						cout << "File name -> " << fileInfo.name << "\n"
							<< "File size -> " << fileInfo.size;
					}
					else {
						cout << "COULDN'T FIND FILE";
						Sleep(1245);
						break;
					}
					Sleep(6000);

				}
				else if ( chek == false)
				{
					cout << "Enter name : ";
					cin >> name;
					cout << "Enter path : ";
					cin >> path;
					folder.setPath(path);
					folder.setName(name);
					ostringstream ss;
					ss << folder.getPath() << "\\" << folder.getName();
					string s = ss.str();
					strcpy_s(Help, s.c_str());
					_finddata_t fileInfo;
					auto res = _findfirst(Help, &fileInfo);
					if (res != -1)
					{
						cout << "FILE SUCCESSFULLY FIND";
						Sleep(1240);
						system("cls");
						cout << "File name -> " << fileInfo.name << "\n"
							<< "File size -> " << fileInfo.size;
					}
					else {
						cout << "COULDN'T FIND FILE";
						Sleep(1245);
						break;
					}
					Sleep(6000);
					
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
				file.setPath(path);
				ostringstream ss;
				ss << file.getPath() << "\\" << extension;
				string s = ss.str();
				strcpy_s(Help, s.c_str());
				_finddata_t fileInfo;
				auto res = _findfirst(Help, &fileInfo);
				if (res != -1)
				{
					cout << "FILE SUCCESSFULLY FIND";
					Sleep(1240);
					system("cls");
					do {
						if (res != 1)
						{
							cout << "Fila name -> " << fileInfo.name << "\n";
						}
					} while (_findnext(res, &fileInfo) != -1);
				}
				else 
				{
					cout << "COULDN'T FIND FILE";
					Sleep(1245);
					break;
				}				
				Sleep(6000);
				break;
			}
		}
	}
private:
	File file;
	Folder folder;
};

