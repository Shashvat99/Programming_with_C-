#include<iostream>
using namespace std;
int area(int ,int );
float area(int );
main()
{
int r,l,b;
//float m;
cout<<"enter the radius of circle=";
cin>>r;
float  m=area(r);
cout<<"area of circle="<<m<<endl;
cout<<"enter the value of length and width=";
cin>>l>>b;
int a=area(l,b);
cout<<"area of rectangle"<<a;
}
float area(int R)
{
return (3.14*R*R);
}
int area(int L,int B)
{
return (L*B);}
