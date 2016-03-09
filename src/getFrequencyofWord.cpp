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
	int i = 0,count=0,result=0,j=0,k=0;
	while (word[i] != '\0')
		i++;
	count = i;
	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		while (j < count + i)
		{
			if (str[j] != word[k])
				break;
			else
			{
				j++;
				k++;
			}
		}
		if (j == (count + i))
			result++;
		i++;
		k = 0;
	}
	return result;
}
//int count_word_int_str_way_2_recursion(char *str, char *word){
//	return 0;
//}

