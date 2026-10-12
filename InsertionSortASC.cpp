#include<iostream>
using namespace std;
int main(){
    int a[]={12,11,13,5,6};
    int n=5;
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        cout<<endl;
        for(int i=1; i<n; i++){
            int key = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
            cout<<"Array pass"<<i<<": ";
            for(int k=0;k<n;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}