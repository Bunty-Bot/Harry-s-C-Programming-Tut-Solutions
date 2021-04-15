#include <stdio.h>

int main()
{
    int a,b;
    a = 23;
    b = 34;
    printf("The sum of a + b is = %d\n",a + b);
    printf("The subtraction of a - b is = %d\n",a - b);
    printf("The multiplication of a*b is = %d\n",a*b);
    printf("The division of a/b is = %d\n",a/b);
    
    int c;
    float d;
    c = 45;
    d = 12.43;
    printf("The sum of c + d is = %f\n",c + d);
    printf("The subtraction of c - d is = %f\n",c - d);
    printf("The multiplication of c*d is = %f\n",c*d);
    printf("The division of c/d is = %f\n",c/d);

    printf("a&&b is = %d\n", a&&b);
    printf("a||b is = %d\n", a||b);
    printf("!(a||b) is = %d\n", !(a||b));

    int p,q;
    p = 2;
    q = 3;
    printf("p&&q is = %d\n", p&q);
    printf("p||q is = %d\n", p|q);
    printf("!(p||q) is = %d\n", !(p||q));

    printf("a is = %d\n", a=+4);
    printf("b is = %d\n", b-=4);
    printf("c is = %d\n", c*=2);
    printf("d is = %f\n", d/=4);

    


   
    return 0;

}

// This is taught by harry in 7th video of this tutorial. In this video he taught all the operators i.e. arithmatic, logical, 
// operational and bitwise operators. 
