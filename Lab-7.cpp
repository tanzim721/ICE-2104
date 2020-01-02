// C++ program for implementation of false position method for

#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000
double func(double x)
{
    return x*x*x-x*x+2;
}
void regularFalsi(double a,double b)
{

    if(func(a)*func(b)>=0)
    {
        cout<<"You have not assumed right a and b"<<endl;

    }
    double c=a;
    for(int i=0;i<MAX_ITER;i++)
    {
        c = (a*func(b)-b*func(a))/(func(b)-func(a));
        if(func(c)==0)
        {
            break;
        }
        else if(func(c)*func(a)<0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    cout<<"The value of root is : "<<c<<endl;

}
int main()
{

    double a=-200,b=300;
    regularFalsi(a,b);

    return 0;

}
