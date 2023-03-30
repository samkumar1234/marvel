/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
using namespace std;
int add(int a,int b,int c=0,int d=0)
{
    return a+b+c+d;
}
int main()
{
    int num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;
    cout<<add(num1,num2,num3);
    cout<<add(num1,num2);
    cout<<add(num1,num2,num3,num4);
    
    return 0;
}
