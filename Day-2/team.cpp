//Codeforces Team
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int arr[n][3];


  int count = 0;

  for(int i = 0; i < n; i++){
    int sum = 0;
    for(int j = 0; j < 3; j++){
       cin >> arr[i][j];
       sum += arr[i][j];
    }
    
    if(sum >= 2){
      count++;
    }
  }

  cout << count << "\n";

  return 0;
}