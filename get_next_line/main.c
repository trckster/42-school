#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
	char *s2;
	int flex = open("../42checker/srcs/gnl/gnl10.txt", O_RDONLY);
	printf("Return: %d\n", get_next_line(flex, &s2));
	printf("Result: %s\n", s2);
	printf("Return: %d\n", get_next_line(flex, &s2));
	printf("Result: %s\n", s2);

}
