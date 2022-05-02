    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    cin>>n;
    unordered_map<char,int> mp;
    char x;
    while(cin>>x){
        x=tolower(x);
        mp[x]++;
    }
    if(n<26){
    cout<<"NO";
    return 0;
    }
    // cout<<mp.size();
    if(mp.size()==26)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
    }
