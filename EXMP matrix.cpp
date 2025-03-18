#include<stdio.h>
#include<conio.h>
#define M 3
#define N 3
int main()
{
	int matrix1[M][N],matrix2[M][N],sum[M][N],i,j;
	printf("Enter the matrix 1 :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",& matrix1[i][j]);
		}
	}
	printf("Matricx element 1 :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",matrix1 [i][j]);
		}
		printf("\n");
	}
	printf("Enter the matrix 2 :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("Matricx element 2 :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",matrix2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			sum[i][j]= matrix1[i][j] + matrix2[i][j];
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
