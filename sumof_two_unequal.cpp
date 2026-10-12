#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5};
    int B[]={2,4,6,8,10,12,14};
    int n1=5;
    int n2=7;
    int n3=(n1>n2)? n1:n2;
    int C[10];
    for(int i=0; i<n3; i++){
        if(i<n1 && i<n2)
        C[i]=A[i]+B[i];
        else if(i<n1)
        C[i]=A[i];
        else
        C[i]=B[i];
    }
    cout<<"Sum: { ";
    for(int i=0; i<n3; i++){
        cout<<C[i];
        if(i!=n3-1)
        cout<<" ,";
    }
    cout<<"}";
}