#include<bits/stdc++.h>
using namespace std;

void fast_io(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}


#define ll          long long 
#define pb          push_back 
#define popb        pop_back 
#define v(type)     vector<type> 
#define vv(type)    vector<vector<type>> 
#define umap        unordered_map 
#define SORT(a)     sort(a.begin(), a.end()) 
#define SORT_R(a)   sort(a.begin(), a.end(), greater<int>()) 
#define Max(a)      *max_element(a.begin(), a.end()) 
#define Min(a)      *min_element(a.begin(), a.end()) 
#define pqma(type)  priority_queue<type> 
#define pqmi(type)  priority_queue<type, vector<type>, greater<type>>

const int MOD = 1e9 + 7;

void solve(){
    
    int n,k; cin>>n>>k;
    v(int) arr(n);
    for(auto& it : arr)
        cin>>it;
    

    pqmi(int) pq;
    for(auto& it : arr){
        pq.push(it);
        if(pq.size() > k){
            pq.pop();
        }
    }

    cout<<pq.top()<<endl;

}



int main(){
    fast_io();
    // int t; cin>>t; while(t--)solve();
    solve();
    return 0;
}