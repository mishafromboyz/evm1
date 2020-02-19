#include "memory.h"

int main()
{
	//here lies the test of memoryget function
	memory meme;
	int valueoriginal = 10;
	int* value;
	value = &valueoriginal;
	cout << "value = " << *value << " and its address is " << &value << endl;
	int basketball = meme.sc_memoryget(2, value);
	cout << "value = " << *value << " now and it's address is " << &value;
	//this works

	//here lies savemem test
	char filename[9] = "file.bin";
	char* filenameinf;
	filenameinf = &filename[0];
	int check = meme.sc_memorysave(filenameinf);
	//this works

	char membuffer[cap];
	char* memblock;
	memblock = &membuffer[0];
	check = meme.sc_memoryload(filenameinf, memblock);
	for (int i = 0; i < cap; i++)
	{
		cout << memblock[i] << " ";
	}

	return 0;
}