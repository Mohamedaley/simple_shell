#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>
#include <dirent.h>

/**
 * struct node - singly linked list
 * @data: the number field
 * @link: points to the next node
 */
typedef struct node
{
	char *data;
	struct node *link;
} list_t;

extern char **environ;

char *search(char *argv, list_t *head);
char *_strcat(char *dest, char *src);
void _exec(char *path_, char **argv, char **envp);
char *path();
void free_list(list_t *head);
void add_node(list_t *head, char *str);
list_t *list_handle();
void handle(char **argv, char **envp);
ssize_t _getline(char **str, size_t *n, FILE *stream);
char *_strtok(char *str, const char *delim);
void _free(char *str);
void __free(char **argv);
int tokenn(char *str);
char **toke(char *str, ssize_t size);
ssize_t _input(char **str);
int interactive(char **envp);

#endif
