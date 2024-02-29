#include "main.h"
/**
 * interactive - A function to call other functions
 * @Return: 0 Success;
 */
void interacticve()
{
    char **argv = NULL;
    char *str = NULL;
    ssize_t size;

    while (isatty(1))
    {
        printf("$Shell$: ");
        size = _input(&str);
        if (size == -1)
        {
            printf("\nExiting/....\n");
            free(str);
            return;
        }
        else
        {
            argv = toke(str);
            handle(argv);
            __free(argv);
            argv = NULL;
            _free(str);
            str = NULL;
        }
    }
}
