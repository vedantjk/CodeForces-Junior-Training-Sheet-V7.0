    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    cin>>n;
    string s;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]++;
    }
    auto x = std::max_element(mp.begin(), mp.end(),
        [](const pair<string, int>& p1, const pair<string, int>& p2) {
            return p1.second < p2.second; });
            cout<<x->first;
    return 0;
    }
