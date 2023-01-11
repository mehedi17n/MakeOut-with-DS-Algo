#include <bits/stdc++.h>
 
using namespace std;

int maxSubArray(int a[], int n){
    for(int i=1; i<n; i++){
        a[i] += max(0, a[i-1]);
    }
    int mx = *max_element(a, a+n);
    return mx;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int r = maxSubArray(a, n);

    cout << r << endl;
    return 0;
}