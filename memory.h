#pragma once
#include <iostream>
#include <fstream>

using namespace std;

#define cap 100


class memory // попробуем ооп чтобы например в функции sc_memorySet было очевидно к чему обращаться
{
private:
	
	int content[cap];

public:

	memory() //используем constructors вместо sc_memoryInit
	{
		for (int i = 0; i < cap; i++)
		{
			this->content[i] = 0;
		}
	}
	int sc_memoryset(int address, int value);
	int sc_memoryget(int address, int* value);
	int sc_memorysave(char* filename);
	int sc_memoryload(char* filename, char* memblock);
};



int sc_reginit(void);
int sc_regset(int register, int value);
int sc_regGet(int register, int* value);
int sc_commandEncode(int command, int operand, int* value);
int sc_commandDecode(int value, int* command, int* operand);
