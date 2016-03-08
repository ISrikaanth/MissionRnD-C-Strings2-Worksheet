/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int compare(char *str, char *word, int i, int j);
int count_word_in_str_way_1(char *str, char *word)
{
	int i = 0, k = 0,a[20],count=0,result=0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || (str[i] == '\0'))
		{
			a[k] = i;
			k++;
		}
	}
	a[k] = -1;
	i = 0;
	while (word[i] != '\0')
	{
		if (word[i] == ' ')
			count++;
	}
	while ((str[i] != '\0') && (a[k+count+1]!=-1))
	{
		if (compare(str, word, a[k], a[k + count+1])==1)
			result++;
		k = k + count + 2;
	}
	return result;
}
int compare(char *str, char *word, int i, int j)
{
	int k;
	for (k = i; k < j; k++)
	{
		if (word[k] != str[k])
			break;
	}
	if (k >= j)
		return 1;
	else
		return 0;
}

//int count_word_int_str_way_2_recursion(char *str, char *word){
//	return 0;
//}

