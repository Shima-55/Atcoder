#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i<(n); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  //試合結果の表の配列
  vector<vector<char>> data(N, vector<char>(N,'-'));



  rep(i,M){
    data.at(A.at(i)-1).at(B.at(i)-1)='o';
    data.at(B.at(i)-1).at(A.at(i)-1)='x';
  }

  
  //結果表示
  rep(i,N) {
    rep(j,N){
        cout << data.at(i).at(j);
        if (j == N-1) {
            cout << endl; // 末尾なら改行
        }
        else {
            cout << " ";  // それ以外なら空白
        }
    }
  }
}
