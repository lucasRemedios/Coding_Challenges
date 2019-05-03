#include <stdio.h>

void Print_Full(int[], int);
int Which_Is_Bigger(int, int);

//----------------------------------------
int main()
{

	int i, nums[7], result, left_start=2, right_start=6;

	// get input from stdin
	for(i=0; i<7; i++)
		nums[i] = (int)getc(stdin)-'0';

	// find which backwards number is bigger		
	for(i=2; i>-1; i--){

		result = Which_Is_Bigger( nums[i], nums[i+4] );

		//if significant digit of left number is larger
		if (result == 0){
			Print_Full( nums, left_start );
			break;
		}

		//if significant digit of right number is larger
		else if (result == 1){
			Print_Full( nums, right_start );
			break;
		}

	}	

	return 0;
}


//----------------------------------------
// Func:    Print_Full
// Params:  arr of ints, start index
// Purpose: Print the reverse of 3-digit number from starting point
void Print_Full(int arr[], int start)
{
	int i;

	for(i=start; i>start-3; i--)	
		printf("%d", arr[i]);
	
	printf("\n");
}

//----------------------------------------
// Func:    Which_Is_Bigger
// Params:  left int, right int
// Purpose: Returns 0 if left is bigger
// 			1 if right is bigger
// 			2 if both equal
int Which_Is_Bigger(int left, int right)
{
	if ( left > right )
		return 0;
	else if ( right > left )
		return 1;
	else
		return 2;	
} 
//----------------------------------------



