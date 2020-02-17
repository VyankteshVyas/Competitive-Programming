#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,s,a;
    cin>>n>>q;

    vector<vector<int>> p;
    for(int i=0;i<n;i++){
        vector<int> v;
        cin>>s;
        for(int j=0;j<s;j++){
            cin>>a;
            v.push_back(a);
        }
        p.push_back(v);
    }
    for(int i=0;i<q;i++){
        int b,c;
        cin>>b>>c;
        vector<int> v;
        v=p[b];
        cout<<v[c]<<endl;

    }
        return 0;
}
