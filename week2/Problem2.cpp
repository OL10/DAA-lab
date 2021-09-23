#include<iostream>
using namespace std;
void find_indices(int a[],int n)
{   
    int c=0;
    for(int k=0;k<n;k++)
    {
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==a[k])
        {
         cout<<i+1<<", "<<j+1<<", "<<k+1<<endl;
         c++; 
         break;
        }
        else if(a[i]+a[j]>a[k])
        j--;
        else
        i++;
    }
    if(c>0)
    break;
   }
   if(c==0)
   {
    cout<<"No sequence found."<<endl;
   }
}
int main()
{
    int t;
   
    cin>>t;
    while(t--)
    {
    int n;
    
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
   
    find_indices(a,n);
    }
}
