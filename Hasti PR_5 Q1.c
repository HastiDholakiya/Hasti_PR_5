#include<stdio.h>

void main()
{
	int i,n;
	
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int a[n];
	
		printf("Enter arrays elements: \n");
			
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
    printf("Negative elements from an array:- \n");
    
    for(i=0;i<n;i++)
    {
    	if(a[i]<0)
    	{
    		printf("%d\n",a[i]);
		}
	}
	
}

/*
Enter array size: 5
Enter arrays elements:
a[0]= 1
a[1]= -4
a[2]= 6
a[3]= -9
a[4]= 4
Negative elements from an array:-
-4
-9
*/
