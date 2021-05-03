#include <stdio.h>
//No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
} 
 
// Without arguments and with return value :
int Sum(); /* Declaration of Function */

 /*Other Code*/ 
int Sum() 
{ 

	int x,y,z; 
	printf("Enter no. 1 : \t"); 
	scanf("%d",&x); 
	printf("\nEnter no. 2 : \t"); 
	scanf("%d",&y ); 
	z=x+y; 
	return z; 
} 


 // With arguments and without return value : 
 void Product(int x ,int y ); 
 {
     /* Declaration of Function */ 

			// Other Code
Product(5,4) /* Calling Product Function in main() */ 
 }


void Product(int a,int b) 
{ 
	int Multiplication; 
	Multiplication = a*b ; /* Definition of Function */ 
	printf("The Product is %d\n\n",Multiplication); 
} 

// With arguments and with return value : 
float Percentage(int x,int y); 
{
    int x; 
    x = Percentage(80,95); // Calling Function 
 /*Code*/
} 
float Percentage(int x,int y) 
{ 
	float perct; 
	perct = ((x+y)/200.0)*100.0; // Definition of Function 
	return perct; 
} 

// This is the 19th video in this tutorial and this is taught by harry in this tutorial. 
// The four ways of declaring the function are given in this code. In this video harry explained 
// functions in a very easy manner. 
