    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n,k;
    cin>>n>>k;
    int count = n;
    while(n>0){
        long long temp;
        cin>>temp;
        unordered_map<int,int> mp;
        while(temp>0){
            int t = temp%10;
            if(t<=k)
            mp[t]++;
            temp = temp/10;
        }
        if(mp.size()!=k+1)
        count--;
        n--;
    }
    cout<<count;
    return 0;
    }
