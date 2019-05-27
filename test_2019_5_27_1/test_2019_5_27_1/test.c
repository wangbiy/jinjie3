#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[] = "wby@bite.com";
	char buf[30] = { 0 };
	char* ret = NULL;
	char* sep = "@.";
	strcpy(buf, arr);
	for (ret = strtok(buf, sep); ret != NULL;ret=strtok(NULL,sep))
	{
		printf("%s\n", ret);
	}
	/*printf("%s\n", strtok(buf, "@."));
	printf("%s\n", strtok(NULL, "@."));
	printf("%s\n", strtok(NULL, "@."));*/
	system("pause");
	return 0;
}