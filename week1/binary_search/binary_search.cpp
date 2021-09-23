#include<iostream>
#include<cmath>
using namespace std;
int binary_search(int *arr,int n,int key)
{
int low=0,high=n-1,c=0;
while(low<=high)
{
    int mid=(low+high)/2;
    c++;
    if(arr[mid]==key)
    {
        return c;
    }
    else if(arr[mid]>key)
    {
    high=mid-1;
    }
    else
    {
    low=mid+1;
    }
}
cout<<"Not ";
return c;
}
int main()
{
    
    freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    int t; 
    
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
   
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    
    cin>>key;
    int c=binary_search(arr,n,key);
    cout<<"Present "<<c<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
