#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

extern char ** environ;

int main(int args, char ** argv){
	int i;
	if (argc < 2)
	{
		fprintf (stderr, "environ: Не достаточно аргументов\n");
		fprintf (stderr, "Пиши так: environ <Любой текст>\n");
		exit (1);
	}
	
	for (i = 0; environ[i] != NULL; i++)
	{
		if (!strncmp (environ[i], argv[1], strlen (argv[1])))
		{
			printf ("'%s' Нашел\n", environ[i]);
			exit (0);
		}	
	}
	printf ("'%s' Нет такой переменной\n", argv[1]);
	exit (0);

	}
