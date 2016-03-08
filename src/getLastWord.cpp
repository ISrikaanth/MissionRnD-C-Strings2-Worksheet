/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	if (str == NULL)
		return NULL;
	int i = 0,count=0,j=0;
	char *a;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (str[i] != ' ')
	{
		count++;
		i--;
	}
	i++;
	a = (char *)malloc(count*sizeof(char));
	while (str[i] != '\0')
	{
		a[j] = str[i];
		i++;
		j++;
	}
	a[j] = '\0';
}
