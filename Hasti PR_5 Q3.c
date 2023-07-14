#include<stdio.h>

void main()
{

	int i,j;
	int r,c;
	int array[10][10];
	int transpose[10][10];
	
	printf("How many rows : ");
	scanf("%d",&r);
	printf("How many colums : ");
	scanf("%d",&c);
		
	printf("Enter array elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("array[%d][%d]= ",i,j);
		    scanf("%d",&array[i][j]);
	    }
	}
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d",array[i][j]);
		}
		    printf("\n");
	}
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		transpose[j][i]=array[i][j];
		}
	}
	printf("The transpose of an array : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        	printf("%d ",transpose[i][j]);
		} 
		printf("\n");
	}
}

/*
How many rows : 3
How many colums : 3
Enter array elements :
array[0][0]= 1
array[0][1]= 2
array[0][2]= 3
array[1][0]= 4
array[1][1]= 5
array[1][2]= 6
array[2][0]= 7
array[2][1]= 8
array[2][2]= 9
123
456
789
The transpose of an array :
1 4 7
2 5 8
3 6 9
*/
