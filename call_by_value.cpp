#include<iostream>
using namespace std;
int sum(int a,int b);
main()
{
int a,b;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
cout<<sum(a,b);
}
int sum(int x,int y)
{
return (x+y);
}
