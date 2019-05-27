#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE*  pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		system("pause");
		return 0;
	}
	/*char* ret = strerror(1);*/
	/*char* ret = strerror(errno);*/
	//0 1 2 3 4 5
	//´íÎóÂë
	/*printf("%s\n", ret);*/
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}