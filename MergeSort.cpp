#include<iostream>
using namespace std;
void mergeArray(int a[], int low, int mid, int high){
    int i=low;
    int j=mid+1;
    int k=0;
    int temp[100];
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=high){
        temp[k++]=a[j++];
    }
    for(int i=low,k=0;i<high;i++,k++){
        a[i]=temp[k];
    }
}
    void mergeSort(int a[], int low, int high){
        if(low<high){
            int mid=(low+high)/2;
            mergeSort(a, low, mid);
            mergeSort(a, mid+1, high);
            mergeArray(a, low, mid, high);
        }
    }
    int main(){
        
        int a[]={12,11,13,5,6};
        int n=5;
        cout<<"Original Array: ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        mergeSort(a, 0, n-1);
        cout<<"Sorted Array: ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
       
    }
