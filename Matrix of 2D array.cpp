#include<stdio.h>
#define M = 3
#define N = 3
int main()
{
	int mat1[M][N],mat2[M][N],sum[M][N],i,j;
	printf("Enter the matrix 1 :");
	for(i=0;i<M;i++)
	{ 
	for(j=0;j<N;j++)
	{
	scanf("%d",&mat1 [i][j]);	
	}
	}
	printf("Matrix Elements  1:\n");
	for (i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",mat1[i][j]);
			
		}
		printf("\n");
	}
	printf("Enter the matrix 2:");
	for(i=0;i<M;i++)
	{ 
	for(j=0;j<N;j++)
	{
	scanf("%d", &mat2 [i][j]);	
	}
	}
	printf("Matrix Elements 2 :\n");
	for (i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",mat2[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			sum[i][j] = mat1[i][j]+ mat2[i][j];
		}
	}	
	
	
	printf("The sum of matrix is :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
