#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 0, j = 0;

	char str1[50] = "...a..***.*0fdf.fg.f**.b.*c..";
	char *str2;

	str2 = calloc(50, sizeof(char));
	printf("%s\n",str1 );

	int count = 0;

	for ( i = 0; i < (strlen(str1)); ++i)
	{
		if (str1[i] == '*') continue;
		if (str1[i] == '.')
		{
			count++;
			continue;
		}
		if(count == 1)
		{
			count = 0;
			str2[j] = '.';
			str2[j+1] = str1[i];
			j = j+2;
			continue;
		}
		count = 0;
		str2[j] = str1[i];
		j++;		
	}

	printf(" \n\n%d\n",str2[1] );
	return 0;
}