#include <bits/stdc++.h>
 
using namespace std;

void reverseArray(int a[], int start, int end){
    if(start >= end) return;
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    reverseArray(a, start+1, end-1);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int start = 0;
    int end = n-1;

    reverseArray(a, start, end);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
