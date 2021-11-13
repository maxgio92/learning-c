#include <stdlib.h>
#include <stdio.h>

int main() {
	int i = 0;
	char s;
	printf("Do you want to allocate memory? y/n");
	scanf("%s",s);
	printf("You choosen: %s",s);

	if ( s == "y" )
	{
		char* buffer = (char*) calloc(3000000000,1);
		printf("Done allocating\n");
	}
	free(buffer);
	return 0;
}
