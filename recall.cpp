//A CPP file used for recoding / recalling previously solved problems
//Reviewing Presents

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  vector<pair<int, int>> v;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back({x, i+1});
  }

  sort(v.begin(), v.end());

  for(auto x: v){
    cout << x.second << " "; 
  }
  cout << "\n";
  return 0;
}