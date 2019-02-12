#include <stdio.h>

int main()
{
	int i, num_lines; 
	float quality_of_life, years, total=0.0;

	//read number of lines
	scanf("%d", &num_lines);

	//get quality of life and years 
	for (i=0; i<num_lines; i++)
	{
		scanf("%f %f", &quality_of_life, &years);
		total += quality_of_life * years;	
	}	
	
	printf("%0.3f\n", total);	

	return 0;
}

