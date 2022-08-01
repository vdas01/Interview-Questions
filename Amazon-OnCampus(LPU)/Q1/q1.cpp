#include <bits/stdc++.h>
using namespace std;
int count(map<long long int ,int>m){
   int c=0;
  for(auto it:m){
      if(it.second != 2 && it.second != 3)
      return -1;
      else
      c++;
  }
  return c;
}
int main() {
  int n;
  cin>>n;
  map<long long int,int>m;
  for(int i=0;i<n;i++){
      long long int x;
      cin>>x;
     m[x]++;
  }
  cout<<count(m);
}
