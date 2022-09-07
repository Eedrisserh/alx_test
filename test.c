#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    int i = 1, sum = 0;

    if (argc < 2)
	    return 0;
    while (i < argc)
    {
	if (atoi(argv[i]) > '0' || atoi(argv[i]) < '9' )	
	    sum += atoi(argv[i]);
	else
		printf("Non integer value found");
	return -1;

		i++;
    }
	printf("The sum total :%d\n", sum);
	return 0;
}


