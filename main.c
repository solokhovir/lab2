#include <stdio.h>
#include "askname.h"
int main(int argc, char** argv)
{
	char first[255], last[255];

	askname(first, last);
	printf("Hello %s %s!\n", first, last);


	printf("Enter your first name: ");
	fgets(first, 255, stdin);
	first[strlen(first) - 1] = '\0';

	printf("Now enter your last name: ");
	gets(last);

	printf("Hello %s %s!\n", first, last);
>>>>>>> f6fbd9b (Prompt user for last name as well)
	return 0;
}
