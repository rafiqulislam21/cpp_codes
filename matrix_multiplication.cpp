#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matrix_size;
	//Taking input of matrix size
	// printf("Enter Matrix size: ");
	scanf("%d", &matrix_size);
	printf("\n");
	//Define matrix size A, B and result depending on use input
	int A[matrix_size][matrix_size];
	int B[matrix_size][matrix_size];
	int result[matrix_size][matrix_size];

	//Taking input for matrix A
	// printf("Enter the first matrix element:\n");
	for (int i = 0; i < matrix_size; i++)
	{
		for (int j = 0; j < matrix_size; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n");
	//Taking input for matrix B
	// printf("Enter the second matrix element:\n");
	for (int i = 0; i < matrix_size; i++)
	{
		for (int j = 0; j < matrix_size; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	printf("\n\n");
	//Multiply two matrix A * B and store into result matrix
	for (int i = 0; i < matrix_size; i++)
	{
		for (int j = 0; j < matrix_size; j++)
		{
			result[i][j] = 0;
			for (int k = 0; k < matrix_size; k++)
			{
				result[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	//for printing result
	// printf("A * B = \n");
	for (int i = 0; i < matrix_size; i++)
	{
		for (int j = 0; j < matrix_size; j++)
		{
			printf("%3d", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
