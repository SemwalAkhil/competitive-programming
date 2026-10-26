#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n,count,large,small;
    cin >> m;cin >>n;
    if (m % 2 == 0 || n % 2 == 0) cout << (m*n/2); 
    else{
        small = m > n ? n : m;
        large =  m+n-small;
        count = ((large) * (small-1) + large) / 2;  
        cout << count;
    }
    
}