#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
* strtow - fn splits a string into words
*
* @str: the string
*
* Return: returns a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int i, m, len;
  	char **words;
	
	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	
	i = m = len = 0;
	while (str[i])
	{
		if (m == 0 && str[i] != ' ')
			m = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			m = 0;
			len++;
		}
		i++;
	}
	len += m == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);
	
	util(words, str);
	words[len] = NULL;
	return (words);
}

/**
* util - util function for fetching words into an array
*
* @words: the strings array
* @str: the string
*/
void util(char **words, char *str)
{
  int i = 0, j = 0, a, m = 0;

  while (str[i])
  {
     if (m == 0 && str[i] != ' ')
     {
        a = i;
        m = 1;
     }
     if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
     {
        create_word(words, str, a, i, j);
        j++;
        m = 0;
     }
     i++;
  }
  if (m == 1)
     create_word(words, str, m, i, j);
}

/**
* create_word - fn  creating a word and insert it into the array
* @words: the array of strings
* @str: string
* @start: starting index
* @end: ending index
* @index: the index of the array
*/
void create_word(char **words, char *str, int start, int end, int index)
{
  int i, j;

  i = end - start;
  words[index] = (char *)malloc(sizeof(char) * (i + 1));
  for (j = 0; start < end; start++, j++)
     words[index][j] = str[start];
  words[index][j] = '\0';
}
