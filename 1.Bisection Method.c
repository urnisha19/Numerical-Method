//1.Bisection Method

#include <stdio.h>
#include <conio.h>
float f(float x)
{
    return x*x*x-x-1; //the function f(x) which root is needed to be found
}
int main()
{
    int i,n=30;
    float a,b,x,equation;

    printf("Enter the value of a and b:\n");
    scanf("%f %f",&a,&b); //let a=1 and b=2 for this equation

    for (i=0; i<=n; i++)
    {
        x=(a+b)/2;
       if (f(x)==0)
            printf("The root is x%d =%f\n", i,x);
        else if(f(x)>0)
        {
            a=a;
            b=x;
            printf("The root is x%d =%f\n", i,x);
        }
        else
        {
            a=x;
            b=b;
            printf("The root is x%d=%f\n", i,x);
        }
    }
    return 0;
}


