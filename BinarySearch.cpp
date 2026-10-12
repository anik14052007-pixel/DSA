#include<iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter number of elemnets in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<"Enter elemnet to serach: ";
        cin>>key;
        int low=0,high=n-1;
        int position=-1;
        while(low<high){
            int mid=(low+high)/2;
            if(arr[mid]==key){
                position=mid;
                break;
            }
            else if(arr[mid]<key){
                low=mid+1;
            }
            else
                high=mid-1;
            
            if(position!=-1)
            cout<<"Elemnt found at: "<<position+1<<endl;
            else
            cout<<"Element not found"<<endl;
        }
    }
}

