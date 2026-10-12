#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest)
        largest=arr[i];
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    cout<<"Largest element is: "<<largest<<endl;
    cout<<"Smallest element is: "<<smallest<<endl;
    return 0;
}