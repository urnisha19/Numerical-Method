//6.Gauss-Seidal
/*Here we are solving:
   20A + 2B +6C  = 28
     A +20B +9c  =-23
    2A - 7B -20C =-57
*/

/* From the above Equations:
   A = (28-2B-6C)/20
   B = (-23-A-9C)/20
   C = (-57+2A-7B)/20
*/

#include<iostream>
#include<iomanip>
#include<math.h>

#define f1(A,B,C)  (28-2*B-6*C)/20
#define f2(A,B,C)  (-23-A-9*C)/20
#define f3(A,B,C)  (-57+2*A-7*B)/20

using namespace std;

int main()
{
    float A0=0, B0=0, C0=0, A1, B1, C1, e1, e2, e3, e=0.0000001;
    int step=1;

    cout<< setprecision(6)<< fixed;
    cout<< endl<<"Count\tA\t\tB\t\tC"<< endl;

    do
    {
        A1 = f1(A0,B0,C0);
        B1 = f2(A1,B0,C0);
        C1 = f3(A1,B1,C0);

        cout<< step<<"\t"<< A1<<"\t"<< B1<<"\t"<< C1<< endl;

        e1 = fabs(A0-A1);
        e2 = fabs(B0-B1);
        e3 = fabs(C0-C1);

        step++;

        A0 = A1;
        B0 = B1;
        C0 = C1;

    }
    while(e1>e && e2>e && e3>e);

    cout<< endl<<"Solution: A = "<< A1<<", B = "<< B1<<" and C = "<< C1;
    return 0;
}
