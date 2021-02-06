#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *auth;
char *service;


int main()
{
	char schar[160];

	while (1) {
		printf("%p, %p \n", auth, service);
		if (fgets(schar, 128, stdin) == 0)
		{
			break;
		}
		if (strncmp(schar, "auth ", 5) == 0)
		{
			auth = (char *)malloc(4);
			if (strlen(schar + 5) <= 30)
			{
				strcpy(auth, schar + 5);
			}
		}
		else if (strncmp(schar, "reset", 5) == 0)
		{
			free(auth);
		}
		else if (strncmp(schar, "service", 6) == 0)
		{
			service = strdup(schar + 7);
		}
		else if (strncmp(schar, "login", 5) == 0)
		{
			if ((*auth + 32) != 0)
			{
				system("/bin/sh");
			}
			else
			{
				fwrite("Password:\n", 1, 10, stdout);
			}
		}
	}
	return 0;
}