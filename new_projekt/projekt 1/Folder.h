#pragma once
#include<iostream>
#include"FileManeger.h"
using namespace std;

class Folder : public FileManager
{
public:
	Folder(string n, string p) : Foldername{ n }, Folderpath{ p }{}
	Folder(string pa) : Folder{ "unknown", pa} {}
	Folder() : Folder{ "unknown", "unknown" } {}

	string getName() { return Foldername; }
	string getPath() { return Folderpath; }

	void setName(string name) { this->Foldername = name; }
	void setPath(string path) { this->Folderpath = path; }
	
	virtual void reName(string name,string path,string new_name);

	virtual void size(string name, string path);	

	virtual void reMove(string name, string path);	

	virtual void create(string name,string path);

	virtual void move(string name, string path, string new_name);

private:
	string Foldername;
	string Folderpath;
};

