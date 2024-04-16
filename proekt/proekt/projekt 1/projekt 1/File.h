#pragma once
#include<iostream>
using namespace std;

class File
{
public:
	File(string n, string p) : Filename{ n }, Filepath{ p }{}

	//File(string na) : File{ na, "unknown", } {}

	File(string pa) : File{ "unknown", pa, } {}

	File() : File{ "unknown", "unknown" } {}

	string getName() { return Filename; }
	string getPath() { return Filepath; }

	void setName(string name) { this->Filename = name; }
	void setPath(string path) { this->Filepath = path; }


private:
	string Filename;
	string Filepath;
};