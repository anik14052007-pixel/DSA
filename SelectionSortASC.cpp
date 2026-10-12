#include<iostream>
using namespace std;
int main(){
    int a[]={64,25,12,22,11};

    int n=5;
    int i, j, min_idx;

    
    for (i = 0; i < n-1; i++)
    {
   
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (a[j] < a[min_idx])
            min_idx = j;


        swap(a[min_idx], a[i]);
    }

   
    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}