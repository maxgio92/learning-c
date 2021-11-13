#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("\n");

  printf("%c", *name);		// Output: H
  printf("%c", *(name+1));	// Output: a
  printf("%c", *(name+7));	// Output: o

  printf("\n");

  printf("%c", *name);		// Output: H
  printf("%c", name[1]);	// Output: a
  printf("%c", name[7]);	// Output: o

  char *namePtr;

  printf("\n");

  namePtr = name;
  printf("%c", *namePtr);	// Output: H
  printf("%c", *(namePtr+1));	// Output: a
  printf("%c", *(namePtr+7));	// Output: o
}
