//2.Iteration Method

#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return  x*x*x+x*x-1; //the function f(x) which is needed be solved
}
float g(float x)
{
    return  sqrt(1/(x+1)); //writing f(x) as x = g(x)
}
int main()
{
    int i,N=30;
    float x0,x;

    printf("Enter initial root:\n");
    scanf("%f", &x0); //let x0=0.5 for this equation

    for(i=0; i<=N; i++)
    {
        x=g(x0);
        x0=x;
        printf("The root is x%d = %f\n", i,x);
    }
    return 0;
}
