//To print integer value.
printf("\n The value of integer is %d", d);
//To print float value.
printf("The value of float is %f", f);      
//To print character.
printf("\n The value of character is %c", c);      
//To print string.
printf("\n The value of string is %s", s); 
//Print character backslash(\) using printf function
printf("\n C programming \m/ ");
//Prints a newline before and after the text
printf("\n This is my C program\n"); · 
//Use \" to print double quote and \' for single quote
printf("\n Welcome to \"The C Programming tutorial\"");
printf("\n Welcome to \'C programming series \'") ;    
//To provide tab space between two words
printf("Hello \t Viewers"); 
//To add vertical tab character.
printf("Hello Viewers");
printf("\v Welcome to C Programming");
//The code described in the video.
#include <stdio.h>
#define PI 3.14
/* this is a multiline comment


this is ignored by my compiler

*/
int main()
{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33; //cannot do this since PI is a constant
    printf(" tab character \t\t my backslash  %f", PI);
    // b = 7.22; //cannot do this since b is a constant
    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %2.4f\n", a, b);
    // printf("%18.4f this",b);

    return 0;
}


