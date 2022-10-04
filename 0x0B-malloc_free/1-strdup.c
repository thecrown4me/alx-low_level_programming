#include "main.h"

/**
* _strdup - Creates a pointer with a copy of the str param
*
* @str: String to copy
*
* Return: a pointer to the duplicated string or
* null if the memory is insufficient or if the str is NULL
*/
char *_strdup(char *str)
{
	char *duplicated_str;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	duplicated_str = malloc((size + 1) * sizeof(char));
	if (duplicated_str == NULL)
		return (NULL);
	while (i < size)
	{
		duplicated_str[i] = str[i];
		i++;
	}
	return (duplicated_str);
}
