#include "File.h"
#include"Interface.h"
#include <iostream>
#include <stdio.h>
#include <io.h>
#include <sstream>
#include <direct.h>
#include <fstream>
#include <Windows.h>

using namespace std;

void File::move(string name,string path,string new_place)
{
	char Help[110];
	char Help_r[110];

	File::setPath(path);
	File::setName(name);
	ostringstream ss, rr;
	ss << File::getPath() << "\\" << File::getName() << ".txt";
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

void File::create(string name,string path)
{
	char Help[110];
	File::setPath(path);
	File::setName(name);
	ostringstream ss;
	ss << File::getPath() << "\\" << File::getName() << ".txt";
	string s = ss.str();
	strcpy_s(Help, s.c_str());
	ofstream oFile(Help);

	if (oFile.is_open()) cout << "File was successfully created!" << endl;
	else cout << "Error during file creating!" << endl;

	Sleep(1500);
	system("CLS");
}

void File::reMove(string name,string path)
{
	char Help[110];

	File::setPath(path);
	File::setName(name);
	ostringstream ss;
	ss << File::getPath() << "\\" << File::getName() << ".txt";
	string s = ss.str();
	strcpy_s(Help, s.c_str());
	int res = remove(Help);
	cout << ((res ? "CAN'T DELETE" : "DELETED SUCCESSFULLY"));
	
	Sleep(1500);
	system("CLS");
}

void File::reName(string name,string path,string new_name)
{
	char Help[110];
	char Help_r[110];

	File::setPath(path);
	File::setName(name);
	ostringstream ss, rr;
	ss << File::getPath() << "\\" << File::getName() << ".txt";
	rr << File::getPath() << "\\" << new_name << ".txt";
	string s = ss.str();
	string r = rr.str();
	strcpy_s(Help, s.c_str());
	strcpy_s(Help_r, r.c_str());
	int res = rename(Help, Help_r);
	cout << ((res ? "CAN'T RENAME" : "RENAMED SUCCESSFULLY"));

	Sleep(1500);
	system("CLS");
}

void File::size(string name,string path)
{
	char Help[110];

	File::setPath(path);
	File::setName(name);
	ostringstream ss;
	ss << File::getPath() << "\\" << File::getName() << ".txt";
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

void File::search(string extension,string path)
{
	char Help[110];

	File::setPath(path);
	ostringstream ss;
	ss << File::getPath() << "\\" << extension;
	string s = ss.str();
	strcpy_s(Help, s.c_str());
	_finddata_t fileInfo;
	auto res = _findfirst(Help, &fileInfo);
	if (res != -1)
	{
		cout << "FILE SUCCESSFULLY FIND\n\t";
		Sleep(400);
		system("cls");
		do {
			if (res != 1)
			{
				cout << "Fila name -> " << fileInfo.name << "\n";
				Sleep(250);
			}
		} while (_findnext(res, &fileInfo) != -1);
		Sleep(3000);
	}
	else
	{
		cout << "COULDN'T FIND FILE";
	}

	Sleep(1500);
	system("CLS");
}





