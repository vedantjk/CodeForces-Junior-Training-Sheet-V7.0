#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int n=s.size();
    string s2;
    
    for(int i=0;i<n;i+=2){
    s2+=s[i];
    }
    
    int m = s2.size();
    sort(s2.begin(),s2.end());
    
    for(int i=0;i<m;i++){
        if(i==m-1)
        cout<<s2[i];
        else
        cout<<s2[i]<<"+";
    }
    
    return 0
 }
