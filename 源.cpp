

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char st[] = "";
	gets(st);
	printf("%s\n", st);
	printf("����Ϊ%d\n", strlen(st));
}
