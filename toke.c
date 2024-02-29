#include "main.h"
/**
 * toke - A function to tokenize string
 * @str: the string passed;
 * @size: the size of string passed;
 * Return: the tokens;
 */
char **toke(char *str, ssize_t size)
{
	static char **temp;
	char **argv = NULL;
	char *token = NULL;
	char *newstr = NULL;
	int count = 0, i = 0;

	newstr = malloc(sizeof(char) * strlen(str) + 1);
	strcpy(newstr, str);
	newstr[strlen(str)] = '\0';
	count = tokenn(str);
	argv = malloc(sizeof(char *) * (count + 1));
	token = _strtok(newstr, " \n");
	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * (strlen(token) + 1));
		strcpy(argv[i], token);
		argv[i][strlen(token)] = '\0';
		token = _strtok(NULL, " \n");
	}
	argv[i] = NULL;
	temp = argv;
	free(newstr);
	newstr = NULL;
	return (temp);
}
