#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void p() {
	unsigned int    oper_b;
	char            schar[76];

    fflush(stdout);
    gets(schar);
    if ((oper_b & 0xb0000000) == 0xb0000000
    {
        printf("(%p)\n", oper_b);
        exit(1);
    }
    puts(schar);
    strdup(schar);
    return;
}

int main() {
    p();
    return 0;
}