#include "memory.h"

int memory::sc_memoryset(int address, int value)
{
	if (address >= cap)
	{
		std::cout << "out of memory limit" << endl;
		return -1;
	}
	else
	{
		this->content[address] = value;
		return 1;
	}
}

int memory::sc_memoryget(int address, int* value)
{
	if (address >= cap)
	{
		std::cout << "out of memory limit" << endl;
		return -1;
	}
	else
	{
		*value = this->content[address];
		return *value;
	}
}

int memory::sc_memorysave(char* filename)
{
	ofstream workingfile;
	workingfile.open(filename, ios::binary);
	for (int i = 0; i < cap; i++)
	{
		workingfile <<"content ["<< i << "] = " << this->content[i] << endl;
	}
workingfile.close();
return 1;
}

int memory::sc_memoryload(char* filename, char* memblock)
{
	
	ifstream workingfile;
	workingfile.open(filename, ios::binary);
	workingfile.seekg(0, ios::beg);
	workingfile.read(memblock, cap);
	workingfile.close();
	return 1;
}
