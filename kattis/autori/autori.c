#include <stdio.h>

#define ASCII_A 65
#define ASCII_Z 90

void Print_Capital_Letters(char*, int);

int main()
{
	char i, str[1024];

	fgets(str, sizeof(str), stdin);

	Print_Capital_Letters(str, sizeof(str));
	
	return 0;
}

//-----------------------------------------------------
//Print all occurrences of capital letters in a string
//ex. CatDogHorse gives CDH
void Print_Capital_Letters(char *s, int size_of_str)
{
	char i;

	for	(i=0; *(s+i) != '\0'; i++)
	{
		//print if it's a capital letter
		if ( ASCII_A <= *(s + i) && *(s + i) <= ASCII_Z)
		{
			printf("%c", *(s + i)); 			
		}
	}
}





