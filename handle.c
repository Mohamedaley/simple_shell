#include "main.h"
/**
 * handle - A function to handle execution and free the path
 * @argv: the list of command and his options
 * Return: nothing;
 */
void handle(char **argv)
{
    char *expath = NULL;
    list_t *head;

    head = list_handle();
    expath = search(argv[0], head);
    _exec(expath, argv);
    free(expath);
    free_list(head);
}
