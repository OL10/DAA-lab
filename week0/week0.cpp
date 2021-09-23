#include<iostream>
using namespace std;
int main()
{
int i,k,n,count;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
cin>>k;
for(i=0;i<n;i++)
{
if(k==a[i])
{
count =count+1;
break;
}
}
if(count!=0)
{
cout<<"present";
}
else
{
cout<<" not";
}
cout<< i;
}
