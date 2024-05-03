#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    int cnt = 0; //mapに入れながら最大値を更新する変数
    int index = 0; //cntと一緒に最大値のindexを保持する

    for(auto i=0; i<n; i++){
        cin >> A[i];
    }
    map<int,int> m;
    for(int a: A){
        
        //m[a]にすでに入っていたらカウント+1して最大値cntを更新
        if(m.count(a)){
            m[a]++;
        }

        else{
            m[a]=1;
        }
    }
    for(auto x : A){
        //今のm[x]が今までのカウント数より大きければ更新
        if(cnt < m[x]){
        cnt=m[x];
        index = x;
        }
    }

    cout << index << " " << cnt <<endl;

}
