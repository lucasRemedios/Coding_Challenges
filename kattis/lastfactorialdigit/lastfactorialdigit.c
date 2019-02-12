#include <stdio.h> 

int How_Many_Lines();
int Compute_Factorial(int); 


int main()
{
	int i, num_lines, factorial_to_compute, factorial;	
	
	num_lines = How_Many_Lines();
		
	//compute the factorials from the input	
	for(i=0; i<num_lines; i++)
	{
		scanf("%d", &factorial_to_compute);
		
		factorial = Compute_Factorial(factorial_to_compute);	
		
		//print last digit of factorial	
		printf("%d\n", factorial % 10  );		
	}	
	

	return 0;
}

//-------------------------------------------------------------
int Compute_Factorial(int factorial_to_compute)
{
	int i, factorial;
	if (factorial_to_compute<3)
		return factorial_to_compute;	

	for (i=factorial_to_compute; i>2; i--)
	{
		factorial += factorial_to_compute * (factorial_to_compute-1);
	}
	 	
	
	return factorial;	
} 

//-------------------------------------------------------------
int How_Many_Lines()
{
	int i;
	scanf("%d", &i);			
	return i;	
}
