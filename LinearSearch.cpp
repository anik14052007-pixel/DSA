#include<iostream>
using namespace std;
int main(){
    int n,key;
    int arr[]={10,20,30,40,50};
    key=20;
    int position=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            position=i;
            break;
        }
    }
    if(position!=-1)
    cout<<"Elemnet found at: "<<position+1<<endl;
    else
    cout<<"Element not found"<<endl;
}