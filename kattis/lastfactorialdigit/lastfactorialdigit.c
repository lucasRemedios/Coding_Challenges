#include <stdio.h> 

int How_Many_Lines();
int Compute_Factorial(int); 


int main()
{
	int i, num_lines, factorial_to_compute;
	unsigned long long factorial;	
	
	num_lines = How_Many_Lines();
		
	//compute the factorials from the input	
	for(i=0; i<num_lines; i++)
	{
		scanf("%d", &factorial_to_compute);
		
		factorial = Compute_Factorial(factorial_to_compute);	
		
		//print last digit of factorial	
		printf("%llu\n", factorial % 10  );		
	
	}	
	

	return 0;
}

//-------------------------------------------------------------
int Compute_Factorial(int factorial_to_compute)
{
	int i;
	unsigned long long factorial=1;

	for (i=factorial_to_compute; i>1; i--)
	{
		factorial *= i ;
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
