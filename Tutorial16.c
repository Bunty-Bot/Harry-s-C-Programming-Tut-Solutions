// Basic syntax for break statements:-

#include<stdio.h> 
int main() 
{ 
	int i,age; 
	for(i = 0 ; i < 5 ; i++) \
	{ 

		printf("Iteration time = %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 
		if (age>10) 
		{ 
			break; // Checking Break Statement 
		} 
		// if(age<10) 
		// { continue; } 
		// printf("Hey Guys\n"); 
		// printf("This code is printed coz if condition is not satisfied. \n"); 
		// printf("Checking Continue Statement\n\n"); // Checking Continue Statement 
	} return 0; 
} 

// Basic syntax for continue statement:-

#include<stdio.h> 
int main() 
{ 
	int i,age; 
	for(i = 0 ; <  ++) 
	{ 
		printf("Iteration time %d\nEnter Your Age : ",i ); 
		scan“"%d",& ); 
		// if (age>10) 
		// { 
		// break; // Checking Break Statement 
		// } 
		if(age<10) 
		{ continue; }
		printf("Hey Guys\n"); 
		printf("This code is printed coz if condition is not satisfied. \n"); 
		printf("Checking Continue Statement\n\n"); // Checking Continue Statement 
	} 
	return 0; 
} 

// Example:-

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;
        }
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("Harry is a good boy");
        
    }
    
    return 0;
}

// This is taught by Harry in 16th video of this tutorial. In this video he taught
// how and where to use these break statements.
