// Basic syntax of GOTO statements:-

#include <stdio.h> 
int main() 
{ 
	int x; 
	for (int i = 0;i <5; i++)
	{ 
		printf("\nHey Guys\n\n"); 
		for (int j = ;j < 3; j++) 
		{ 
			printf("Type any No. & To Exit : Press 1\n"); 
			scanf("%d", &x); 
			if (x == 1) 
			{
			 	goto end; // This goto will transfer the control to end: i.e. out of both loop 
			} 
		}	 
	} 
	end: 
	printf("\'For\' loops are skipped as you pressed 1"); 
	return 0; 
}

// Example:-

#include <stdio.h>

int main()
{
    // label:
    //     printf("we are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end");
    int num;
    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for(int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }
        
    }
    end:
    

    return 0;
}

// This is taught by Harry in 17th video of this tutorial. In this video he gave information about
// working and use of GOTO statements.
