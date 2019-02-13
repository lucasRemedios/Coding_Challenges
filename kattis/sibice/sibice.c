#include <stdio.h>
#include <math.h>
#define num_input_first_line 3


float Find_Hypotenuse(int a, float b );
void Do_Matches_Fit(int n, float hyp );

int main()
{

	int i, num_lines_of_input, width;
	float length, hypotenuse;

	//get how many consecutive lines of input there will be
	//get dimensions of container
	scanf("%d", &num_lines_of_input);		
	scanf("%d", &width);
	scanf("%f", &length);

	hypotenuse = Find_Hypotenuse(width, length);

	//check all matches — see if fit — print results
	Do_Matches_Fit(num_lines_of_input, hypotenuse);

	return 0;
}

//----------------------------------------------------------
float Find_Hypotenuse(int a, float b )
{
	return sqrt( pow(a, 2) + pow(b, 2)  );
}


//----------------------------------------------------------
void Do_Matches_Fit(int n, float hyp )
{
	int i;
	short match_length;	
	 
	//check all matches
	for(i=0; i<n; i++)
	{
		scanf("%hu", &match_length);			

		//print DA if match fits in container —otherwise NE 
		printf(	"%s\n",	(match_length <= hyp) ? "DA": "NE");

	}
}

