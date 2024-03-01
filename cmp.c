#include "main.h"
/**
 *
 */
int cmp(char *str)
{
    char *ext = "exit";

    if (strcmp(str, ext) == 0)
    {
        return (1);
    }
    else
        return (0);
}