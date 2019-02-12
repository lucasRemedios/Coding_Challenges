#include <stdio.h>

int Did_Hiss(char str[]);
const int MAX_SIZE = 30;


int main()
{

	char input_string[MAX_SIZE];

	fgets(input_string, MAX_SIZE, stdin);	

	//Prints if there weren't 2 s chars back to back in input	
	if( ! Did_Hiss(input_string))
	{
		printf("no hiss\n");
	}

	return 0;
}

//-------------------------------------------------------
//Print hiss if there are 2 s chars back to back
//returns 1 if 2 s chars back to back
//returns 0 otherwise  
int Did_Hiss(char str[])
{	
	int count=0;
	int i;
	for (i=0; i<MAX_SIZE-1; i++)
	{
		//check if neighboring chars are both s
		if (str[i] == 's' && str[i+1] == 's') 
		{
			printf("hiss\n");
			return 1;
		}
		count ++;
	}
	return 0;
}		
