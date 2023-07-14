#include<stdio.h>

void main()
{

	int i,j;
	int r,c;
	
	printf("How many rows : ");
	scanf("%d",&r);
	printf("How many colums : ");
	scanf("%d",&c);

    int largest;
	int array[r][c];
		
	printf("Enter array elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("array[%d][%d]= ",i,j);
		    scanf("%d",&array[i][j]);
	    }
    }
    largest=array[0][0];
    printf("The largest elements is : \n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		if(array[i][j]>largest)
    		{
    		largest=array[i][j];
			}
		}
	}

	printf("%d",largest);
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
The largest elements is :
9
*/
