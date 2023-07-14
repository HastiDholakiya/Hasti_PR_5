#include <stdio.h>

int main() {
    int array[10][10];
    int r, c, i, j;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    
    printf("\nEnter array's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("\n");
    
    printf("Enter row number: ");
    scanf("%d", &i);
    
    printf("Elements of row %d: ", i);
    for (j = 0; j < c; j++) {
        printf("%d", array[i][j]);
        if (j < c - 1)
            printf(", ");
    }
    printf("\n");
    
    int rowSum = 0;
    for (j = 0; j < c; j++) {
        rowSum += array[i][j];
    }
    printf("The sum of row %d: %d\n", i, rowSum);
    
    printf("\nEnter column number: ");
    scanf("%d", &j);
    
    printf("Elements of column %d: ", j);
    for (i = 0; i < r; i++) {
        printf("%d", array[i][j]);
        if (i < r - 1)
            printf(", ");
    }
    printf("\n");
    
    int colSum = 0;
    for (i = 0; i < r; i++) {
        colSum += array[i][j];
    }
    printf("The sum of column %d: %d\n", j, colSum);
    
}
/*
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
a[2][0] = 7
a[2][1] = 8
a[2][2] = 9

Enter row number: 2
Elements of row 2: 7, 8, 9
The sum of row 2: 24

Enter column number: 1
Elements of column 1: 2, 5, 8
The sum of column 1: 15
*/
