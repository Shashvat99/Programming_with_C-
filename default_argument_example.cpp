#include<iostream>
using namespace std;
int sum(int a,int b,int=0);
main()
{
int a,b,c;
cout<<"enter two number"<<endl;
cin>>a>>b;
cout<<sum(a,b);
cout<<"enter three number"<<endl;
cin>>a>>b>>c;
cout<<sum(a,b,c);
}
int sum(int x,int y,int z)
{
return (x+y+z);
}
