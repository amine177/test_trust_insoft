#include <stdio.h>

int main(int argc, char** argv)
{
	//while (argc > -5)
	//	printf(argv[argc--]);
	printf("%d\n", argc);
	if (1)
		if (argc > 1)
			if (argv)
				if ((char)*argv[1] & 0xc0)
					if ((char)*argv[(char)*argv[1]] &0xc0)
						printf("done\n");
	return 0;
}
