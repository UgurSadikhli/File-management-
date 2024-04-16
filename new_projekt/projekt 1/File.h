#pragma once
#include <iostream>
#include "FileManeger.h"
using namespace std;

class File : public FileManager
{
public:
	File(string n, string p) : Filename{ n }, Filepath{ p }{}
	File(string pa) : File{ "unknown", pa, } {}
	File() : File{ "unknown", "unknown" } {}

	string getName() { return Filename; }
	string getPath() { return Filepath; }

	void setName(string name) { this->Filename = name; }
	void setPath(string path) { this->Filepath = path; }


	virtual void reName(string name,string path,string new_name);

	virtual void search(string extention, string path);

	virtual void size(string name,string path);

	virtual void reMove(string name ,string pass);

	virtual void create(string name,string path);

	virtual void move(string name,string path,string new_place);

private:
	string Filename;
	string Filepath;
};