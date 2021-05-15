#include<stdio.h>
int main()
{
    int a;
    printf("Please enter the subject in which you have passed:\nPress 1 for Science\nPress 2 for Maths\nPress 3 for Science and Maths.\n");
    scanf("%d", &a);
    if (a==1)
    {
        printf("Congrats!!! You are rewarded with 15 Rs.");
    }

    else if (a==2)
    {
        printf("Congrats!!! you are rewarded with 15 Rs.");   
    }
    
    else if (a==3)
    {
        printf("Congrats!!! You are rewarded with 45 Rs.");   
    }

    return 0;
}

// This is a quiz given by Harry in the 10th video of this tutorial. This is just a 
// friendly quiz given by him in the video.
