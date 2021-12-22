#include<iostream>
using namespace std;
int main()
{
int N,u,i=0,v,w;
cout<<"Enter the value of N : ";cin>>N;
u=3;
v=2;
if(N==0)w=u;
else if(N==1)w=v;
else for(i=2;i<=N;i++){w=i*v+(i+1)*u+i;u=v;v=w;}
cout<<"u("<<N<<")="<<w<<endl;
return 0;
}
