#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,l,r;
 int sum = 0;
 cin >> n;
 for(int i = 0;i < n;i++){
   cin >> l >> r;
   sum += r - l + 1;
 } 
 cout << sum << endl;
}