#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,k;
 cin >> n >> k;
 int x = 1;
 for(int i = 0;i < n;i++){
   x += (x<k?x:k);
 }
 cout << x << endl;
}