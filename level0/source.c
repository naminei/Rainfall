#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#define _GNU_SOURCE

int main(int argc, char **argv)
{
	gid_t gid;
	uid_t uid;
	char *arg[2];

	if (atoi(argv[1]) == 423)
	{
		arg[0] = strdup("/bin/sh");
		arg[1] = 0;
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", arg);
	}
	else
	{
		fwrite("No !\n", 1, 5, stderr);
	}
	return (0);
}
