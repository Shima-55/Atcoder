#include <bits/stdc++.h>
using namespace std;
using pitit = pair<int64_t, int64_t>;

int main() {
    int n;
    cin >> n;
    int64_t a,b;

    vector<pitit> p;
    pitit k;
    for(int i=0; i<n; ++i){
        cin >> a >> b;
        p.push_back(make_pair(b,a));
    }

    sort(p.begin(),p.end());

     for (pitit pi : p){
        int64_t c,d;
        tie(c,d) = pi;
        cout << d <<" " << c <<endl;
     }
}

