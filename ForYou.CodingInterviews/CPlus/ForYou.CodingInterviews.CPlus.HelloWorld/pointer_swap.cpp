#include "pointer_swap.h"

void swap(int* input1_p, int* input2_p)
{
	int temp = *input1_p;
	*input1_p = *input2_p;
	*input2_p = temp;
}