#include <stdio.h>

void run(void) {
	printf("Good... Wait what?\n");
	system("/bin/sh");
	return;
}

int main(void) {
    char str[64];

    gets(str);
    return 0;
}
