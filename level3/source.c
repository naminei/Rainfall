#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int m;

void    v()
{
    char    schar[520];
    fgets(schar,512,stdin);
    printf("%s\n", schar);
    if (m == 64)
    {
        fwrite("Wait what ?\n", 1, 12, stdout);
        system("/bin/sh");
    }
    return;
}

int     main()
{
    v();
    return (0);
}