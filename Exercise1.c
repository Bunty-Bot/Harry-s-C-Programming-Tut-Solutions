//this is a first exercise in our tutorial.
//We have to give input a number and print the table of that number
#include <stdio.h>
int main()
{
    int num;
    printf("Please enter the number to get the multiplication table of it:\n");
    scanf("%d", &num);
    printf("The multiplication table of %d is as follows:", num);
    printf("%d X 1 = %d\n", num, num*1);
    printf("%d X 2 = %d\n", num, num*2);
    printf("%d X 3 = %d\n", num, num*3);
    printf("%d X 4 = %d\n", num, num*4);
    printf("%d X 5 = %d\n", num, num*5);
    printf("%d X 6 = %d\n", num, num*6);
    printf("%d X 7 = %d\n", num, num*7);
    printf("%d X 8 = %d\n", num, num*8);
    printf("%d X 9 = %d\n", num, num*9);
    printf("%d X 10 = %d\n", num, num*10);
    printf("This is the multiplication table of your desired number.");


    return 0;
}

// This is the solution of first exercise. We can also solve this by using loops.
// But when this exercise was given loops weren't taught so I done it by this method.
