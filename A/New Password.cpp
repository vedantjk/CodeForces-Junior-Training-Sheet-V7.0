    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    int n,k;
    cin>>n>>k;
    string s2;
    for(int i=0;i<n;i++){
        s2+=s[i%k];
    }
    cout<<s2;
    return 0;
    }
