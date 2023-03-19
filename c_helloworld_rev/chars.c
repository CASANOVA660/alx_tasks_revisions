#include <stdio.h>

int main()
{
	int c;
	printf("enter some txt");
	while((c=getchar()) != '\n'){
		printf("you entered :");
		putchar(c);
		printf("\n");
	};
	return (0);
}
