#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,4,5,1};
    int n=6;
    cout<<"Duplicate elements: ";
    for(int i=0; i<n; i++){
        bool alreadyprinted=false;
        for(int k=0; k<i;k++){
            if(arr[i]==arr[k]){
                alreadyprinted=true;
                break;
            }
        }
        if(alreadyprinted)
            continue;
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    cout<<arr[i]<<" ";
                    break;
                }
            }

        
    }
}