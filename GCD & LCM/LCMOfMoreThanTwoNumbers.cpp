#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    {
        return gcd(b,a % b);
    }
}
int lcmarray(int arr[],int n)
{
    int result = arr[0];
    for(int i=1;i<n;i++)
    {
        result = (result*arr[i])/gcd(arr[i],result);
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter size of arr:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in arr:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"LCM is :"<<lcmarray(arr,n)<<endl;
    return 0;
}
