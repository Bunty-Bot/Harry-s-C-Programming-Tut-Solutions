// Call by Values
// void swap(int x, int y)
// {
// int temp;
// temp=x;
// x=y;
// y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(r, v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
// } 

// Call by reference
// void swap(int *x, int *y)
// {
// int temp;
//  temp=*x;
// *x=*y;
// *y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(&r, &v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
// }

#include <stdio.h>

void changeValue(int* address)
{
    *address = 37565;
}

int main()
{
    int a = 34, b =56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}

// This is the code described in the video. This is taught by Harry in his 31st video of this 
// tutorial. In this video he taught two methods of calling a function viz. call by value and call 
// by reference. In the first part of this file, the basic examples of these method is given.
