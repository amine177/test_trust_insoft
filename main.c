#include <stdio.h>

int main(int argc, char** argv)
{
	//while (argc > -5)
	//	printf(argv[argc--]);
	printf(argv[argc & ~(argc) - argc]);
	return 0;
}
