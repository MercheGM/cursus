#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char *leaker;
	
	leaker = malloc(1);
	leaker = malloc(1);
	leaker = malloc(1);
	leaker = malloc(1);
	leaker = malloc(1);
	system("leaks a.out");

	leaker = malloc(1);
	leaker = malloc(1);
	leaker = malloc(1);
	leaker = malloc(1);
//	getchar();
	return 1;
}
