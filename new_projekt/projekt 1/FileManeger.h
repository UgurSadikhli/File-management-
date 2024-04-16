#pragma once
#include<string>

class FileManager
{
public:

	virtual void show(char* path) {}

	virtual void reName(char* name, char* path, char* new_name) {}

	virtual void search(char* extention, char* path) {}

	virtual void size(char* name, char* path) {}

	virtual void reMove(char* name, char* path) {}

	virtual void create(char* name, char* path) {}

	virtual void move(char* name, char* path, char* new_name) {}

private:

};
