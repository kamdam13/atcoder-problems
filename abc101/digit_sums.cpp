#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,N,s=0;
  cin >> n;
  N = n;
  while(n){
    s += n%10;
    n /= 10;
  }
  cout << (N%s?"No":"Yes") << endl;
}