#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *c;

void	m(void)
{
    printf("%s - %d\n", c, (int)time(NULL));
    return ;
}

int     main(int ac, char **av)
{
    int *tab_1;
    int *tab_2;
    int fd;

    tab_1 = malloc(8);
    tab_1[0] = 1;
    tab_1[1] = (int)malloc(8);

    tab_2 = malloc(8);
    tab_2[0] = 2;
    tab_2[1] = (int)malloc(8);

    strcpy(tab_1[1], av[1]);
    strcpy(tab_2[1], av[2]);
    fd = fopen("/home/user/level8/.pass","r");
    fgets(c, 68, fd);
    puts("~~");
    return (0);
}