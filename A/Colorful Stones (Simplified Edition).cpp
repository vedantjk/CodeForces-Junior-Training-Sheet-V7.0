    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i=0;
    int j=0;
    int n=t.size();
    while(i<n){
        if(t[i]==s[j])
        j++;
        
        i++;
    }
    cout<<j+1;
    return 0;
    }
