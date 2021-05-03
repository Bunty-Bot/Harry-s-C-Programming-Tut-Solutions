#include<stdio.h> 
int main() 
{ 
	short a=10; //initializing variable of short data type 
	int b; //declaring int variable 'b'. 
	b=a; //Implicit type casting 
	printf("%d\n",a); 
	printf("%d\n",b); 


	int p; 
	float q; 
	char c; 
	printf("Enter the value of a\n"); 
	scanf("%d",&p); 
	printf("A is %d\n", p); 
	printf("Enter the value of b\n"); 
	scanf("%f",&q ); 
	printf("B is %d\n", (int) q); 
	printf("Type any character : \n"); 
	scanf(" %c",&c ); 
	printf("Character is %d",(int) c); 
	return 0; 
} 

// This code is given by harry in 18th video of this tutorial. In this video he taught about
// implicit and explicit typecasting. From 11th line the code for explicit typecasting starts.
