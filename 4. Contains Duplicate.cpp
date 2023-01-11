#include <bits/stdc++.h>
 
using namespace std;

bool containsDuplicate(int a[], int n){
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[a[i]]++;
    }
    for(auto i : m){
        if(i.second > 1) return true;
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    bool ok = containsDuplicate(a, n);
    
    if(ok){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}