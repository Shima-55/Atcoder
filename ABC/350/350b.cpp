#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力を受け取る
  int N,Q;
  cin >> N >> Q;

  int T[1010];
  for(int i=0; i<Q; i++){
    cin >> T[i];
  }

/*
  for(int i=0; i<Q; i++){
    cout << T[i] <<" ";
  }
*/

  //歯が生えていたら0の歯抜きフラグ
  int H[1010]={0};
  for(int i=0; i<Q; i++){
    if(H[T[i]-1]==0) {
        H[T[i]-1]=1;
        //out << T[i] << "のはをぬく"<<endl;
    }
    else H[T[i]-1]=0;
  }

  //最終的に生えている歯をカウント
  int cnt=0;
  for(int i=0; i<N; i++){
    if(H[i]==0) cnt++;
  }
  cout << cnt << endl;

}