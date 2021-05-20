#include<stdio.h>

int main()
{
    float kms_to_mile = 0.621371;
    float inches_to_foot = 0.0833333;
    float cms_to_inches = 0.393701;
    float inches_to_meters = 0.0254;
    float pound_to_kg = 0.453592;
    float input();
    
    while (1)
    {
        printf("Press 1 to conver kms to mile.\nPress 2 to convert inches to foot.\nPress 3 to convert cms to inches.\nPress 4 to convert inches to meters.\nPress 5 to convert pound to kg.\nPress 0 to exit the code.");
        scanf("%f", input());
        switch (input())
        {
        case 0:
            goto end;
            break;
        case 1:
            printf("Please enter the km quantity so that we can convert it to miles:\n");
            scanf("%d", input());
            printf("OK.\nSo %d kms is equal to %d miles.", input(), input()*kms_to_mile);
        
        default:
            break;
        }
    }

    end:

    
    return 0;
}

// This is the solution of the second exercise given by harry. In this exercise we have to use the 
// switch statements and we have to make the given conversions by harry. For this we have to take 
// input from user and convert it appropriately.
