#include <bits/stdc++.h>
using namespace std;

int main() {
  // 科目の数Nを受け取る
  string S;
  cin >> S;

  string N;
  for(int i=0; i<3; i++){
    N[i]=S[i+3];
  }
  int k = stoi(N);
  if(k<=349 && k != 316 && k !=0){
    cout << "Yes" << endl;
  }
  else 
    cout << "No" <<endl;

}