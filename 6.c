#include <stdio.h>

int main() {
	int k = 0, y = 0;
		printf("Введите любое число от 1 до 365 включительно\n");
		scanf("%d", &k);
		y = k%7;  	
  	printf("День недели: %d\n", y);
 
	}
