#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    o()
{
    system("/bin/sh");
    exit(1);
}

void    n()
{
    char    schar[520];
    fgets(schar,512,stdin);
    printf(schar);
    exit(1);
}

int     main(int ac, char **av)
{
    n();
    return (0);
}