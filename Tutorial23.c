#include <stdio.h>
int main()
{
    //first way of declaring the array.
    // int marks[4];
    // marks[0] = 43;
    // marks[1] = 83;
    // marks[2] = 72;
    // marks[3] = 82;

    // printf("The array is:");

    // for (int i = 0; i <= 3; i++)
    // {
    //     printf("%d\t", marks[i]);
    // }

    // Second way of declaring the array.
    // int marks[4] = {12,43,22,76};
    // printf("The array is:");
    // for (int i = 0; i <= 3; i++)
    //  {
    //      printf("%d\t", marks[i]);
    //  }
    
    // The 2-D array is declared as,
    int marks[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            printf("%d ", marks[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}

// This is taught by Harry in the 23rd video of this tutorial. In this video he briefly explains about 
// the arrays and he also showed two ways to declare an array. 
