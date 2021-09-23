#include<iostream>
using namespace std;
int linear_search(int *arr,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
          return (i+1);
        }
    }
    return -1;
}
int main()
{

    
    freopen("input.txt","r",stdin);
    
    freopen("output.txt","w",stdout);
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
    int c=linear_search(arr,n,key);
    if(c!=-1)
    cout<<"Present "<<c<<endl;
    else
    cout<<"Not Present "<<n<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
