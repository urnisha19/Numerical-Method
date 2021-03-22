//3.Newton Raphson Method

#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return x*log(x) - 1.2;//the function which is needed to be solved
}
float g(float x)
{
    return log(x)+1;//first order derivative of the function
}
int main()
{
    int i,N=30;
    float x0,x;
    printf("Enter the initial root:\n");
    scanf("%f",&x0);//let x0=2.75 for this equation

    for(i=1; i<N; i++)
    {
        x= x0- (f(x0)/g(x0));
        printf("The root is x%d = %f\n",i,x);
        x0=x;
    }
    return 0;
}
