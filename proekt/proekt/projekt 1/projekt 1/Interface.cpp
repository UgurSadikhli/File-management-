#pragma once
#include "File.h"
#include"Folder.h"
#include<stdio.h>
#include <iostream>
#include<direct.h>
#include <fstream>
#include <sstream>

using namespace std;


//void create()
//{
//	Folder folder;
//	char Name[110];
//	char Path[110];
//	string name;
//	string path;
//	int opt;
//	cout << "1)Creat file\n"
//		 <<  "2)Creat folder\n"
//		 << "\tchoice : ";
//	cin >> opt;
//	if (opt == 1)
//	{
//	
//	}
//	cout << "Enter name : ";
//	cin >> name;
//	cout << "Enter path : ";
//	cin >> path;
//	folder.setPath(path);
//	folder.setName(name);
//	//ostringstream ss;
//	//ss << folder.getPath() << "\\" << folder.getName();
//	string a{ folder.getPath() + "\\" + folder.getName() };
//	//string s = ss.str();
//	strcpy_s(Name, a.c_str());
//	int res = _mkdir(Name);
//}