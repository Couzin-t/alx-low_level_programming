#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{

	 printf("Size of a char: %lu byte(s)\n", sizeof(char));
	 printf("Size of int: %lu byte(s)\n", sizeof(int));
	 printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	 printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	 printf("Size of float: %lu byte(s)", sizeof(float));
	 return (0);
}
