#include <stdio.h>
#include <string.h>

void main() {
int i;
char *tags[] = {"!DOCTYPE HTML", "html", "body", "h3"};
char marks[] = {'\"','<','/', '>'};
FILE *pf = NULL;//Указатели на файлы

pf = fopen("cgi.html","w");

for(i = 0; i < 4; i++){
	fprintf(pf, "%c", marks[1]);
	fprintf(pf, "%s", tags[i]);
	fprintf(pf, "%c\n", marks[3]);
}
	fprintf(pf,"My first CGI! It's work!");
for(i > 0; i--;) {	
	fprintf(pf, "%c", marks[1]);
	fprintf(pf, "%c\n", marks[2]);
	fprintf(pf, "%s", tags[i]);
	fprintf(pf, "%c\n", marks[3]);
}
fclose(pf);
}
