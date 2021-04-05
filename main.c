#include <stdio.h>

int main(int argc, char** argv)
{
	//while (argc > -5)
	//	printf(argv[argc--]);
	if (1)
		if (*argv[1] & 0xc0)
			if (*argv[*argv[1]] &0xc0)
				printf("done\n");
	return 0;
}
