#include <bits/stdc++.h>
 
using namespace std;

int findSum(int A[], int N){

    // Easy solution
    // sort(A, A+N);
    // int mn = A[0];
    // int mx = A[N-1];

    // O(n)
    int mx=A[0],mn=A[0];
    for(int i=1; i<N; i++){
        if(A[i] > mx){
            mx = A[i];
        }
        if(A[i] < mn){
            mn = A[i];
        }
    }
    return mx+mn;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int r = findSum(a, n);
    cout << r << endl;

    return 0;
}