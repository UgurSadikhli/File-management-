#include "Folder.h"
#include"Interface.h"
#include <iostream>
#include <stdio.h>
#include <io.h>
#include <sstream>
#include <direct.h>
#include <fstream>
#include <Windows.h>

using namespace std;

void Folder::create(string name, string path)
{
	char Help[110];
	Folder::setPath(path);
	Folder::setName(name);
	ostringstream ss;
	ss << Folder::getPath() << "\\" << Folder::getName();
	string s = ss.str();
	strcpy_s(Help, s.c_str());
	int res = _mkdir(Help);
	cout << ((res ? "CAN'T CREAT" : "CREATED SUCCESSFULLY"));

	Sleep(1500);
	system("CLS");
}


void Folder::reMove(string name, string path)
{
	char Help[110];
	char systemString[200] = "rmdir /s /q ";

	Folder::setPath(path);
	Folder::setName(name);
	ostringstream ss;
	ss << Folder::getPath() << "\\" << Folder::getName();
	string s = ss.str();
	strcpy_s(Help, s.c_str());
	strcat_s(systemString, Help);
	system(systemString);

	Sleep(1500);
	system("CLS");
}

void Folder::reName(string name,string path,string new_name)
{
	char Help[110];
	char Help_r[110];

	Folder::setPath(path);
	Folder::setName(name);
	ostringstream ss, rr;
	ss << Folder::getPath() << "\\" << Folder::getName();
	rr << Folder::getPath() << "\\" << new_name;
	string s = ss.str();
	string r = rr.str();
	strcpy_s(Help, s.c_str());
	strcpy_s(Help_r, r.c_str());
	int res = rename(Help, Help_r);
	cout << ((res ? "CAN'T RENAME" : "RENAMED SUCCESSFULLY"));

	Sleep(1500);
	system("CLS");
}

void Folder::move(string name, string path, string new_place)
{
	char Help[110];
	char Help_r[110];

	Folder::setPath(path);
	Folder::setName(name);
	ostringstream ss, rr;
	ss << Folder::getPath() << "\\" << Folder::getName();
	rr << new_place << "\\" << name;
	string s = ss.str();
	string r = rr.str();
	strcpy_s(Help, s.c_str());
	strcpy_s(Help_r, r.c_str());
	int res = rename(Help, Help_r);
	cout << ((res ? "CAN'T MOVE" : "MOVED SUCCESSFULLY"));

	Sleep(1500);
	system("CLS");
}

void Folder::size(string name, string path)
{
	char Help[110];

	Folder::setPath(path);
	Folder::setName(name);
	ostringstream ss;
	ss << Folder::getPath() << "\\" << Folder::getName();
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
	}

	Sleep(1500);
	system("CLS");
}