//4.False position method

#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return(x*x*x-2*x-5);//the function which is needed to be solved
}
int main()
{
    int i,N=30;
    float a,b,x;
    printf("Enter the value of a and b:\n");
    scanf("%f %f", &a,&b);//let a=2 and b=3 for this equation

    for(i=0; i<=N; i++)
    {
        x=(a*f(b)- b*f(a)) / (f(b)-f(a));
        printf("The root x%d = %f\n",i,x);

        if(f(a)*f(x)<0)
            b=x;
        else
            a=x;
    }
    return 0;
}
