#include <stdio.h>

unsigned char *tags[] = {"!DOCTYPE HTML", "html", "body", "h3"};
unsigned char *marks[] = {'\"','<','/', '>'};

int main() {
int i = 0;

for(i = 0; i < 3; i++){
	printf("%c", marks[1]);
	printf("%s", tags[i]);
	printf("%c\n", marks[3]);
}

	printf("%c", marks[1]);
	printf("%s", tags[3]);
	printf("%c\n", marks[3]);
	printf("My first CGI! It's work!");
	printf("%c", marks[1]);
	printf("%c\n", marks[2]);
	printf("%s", tags[3]);
	printf("%c\n", marks[3]);


for(i = 1; i < 3; i++){
	printf("%c", marks[i]);
	printf("%c", marks[2]);	
	printf("%s", tags[i]);
	printf("%c\n", marks[3]);
}


}
