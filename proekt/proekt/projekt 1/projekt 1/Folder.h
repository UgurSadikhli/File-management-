#pragma once
#include<iostream>
using namespace std;

class Folder
{
public:
	Folder(string n, string p) : Foldername{ n }, Folderpath{ p }{}

	//Folder(string na) : Folder{ na, "unknown"} {}

	Folder(string pa) : Folder{ "unknown", pa} {}

	Folder() : Folder{ "unknown", "unknown" } {}

	string getName() { return Foldername; }
	string getPath() { return Folderpath; }

	void setName(string name) { this->Foldername = name; }
	void setPath(string path) { this->Folderpath = path; }

private:
	string Foldername;
	string Folderpath;
};

