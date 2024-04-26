#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i<(n); ++i)

int main() {
  // 入力を受け取る
  int N;
  cin >> N;
  vector<int> a(N+1);
  rep(i,N) cin >> a[i+1];

  vector<int> pos(N+1);
  for(int i=1; i<N; i++) pos[a[i]] = i;

  vector<pair<int,int>> ans;

  for(int i = 1; i <N; i++){
    while(a[i] != i){
        int j = pos[i];
        swap(a[i],a[j]);
        swap(pos[a[i]],pos[a[j]]);
        ans.emplace_back(i,j);
    }

  }
  cout << ans.size() <<endl;
  for(auto[i,j]:ans) cout << i << ' ' << j <<endl;
return 0;
}