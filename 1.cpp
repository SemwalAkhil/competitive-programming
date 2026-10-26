/*
board of mxn
domino 2x1 with rotation
fill the board with maximum dominos
1 domino 2 squares
no overlap
domino inside the board
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n,count,boxes;
    cin >> m;cin >>n;
    count = min(m,n);
    count = count * count;
    boxes = m*n - count;
    count = count/2;
    count += boxes/2;
    cout << count;
}