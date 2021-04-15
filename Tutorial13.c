// The basic syntax for Do-While loop is;

// do {
//    statements );
// } while( test condition );

#include 

int main()
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}

// This is taught by harry in 13th video of this tutorial.
// In this video harry explained Do-While loop with exaple and its basic syntax.
