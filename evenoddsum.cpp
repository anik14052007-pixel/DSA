#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int even=0;
    int odd=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0)
        even+=arr[i];
        else
        odd+=arr[i];
    }
cout<<"Sum of Even: "<<even<<endl;
cout<<"Sum of Odd: "<<odd<<endl;
}