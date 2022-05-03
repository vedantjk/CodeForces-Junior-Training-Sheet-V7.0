    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    char c;
    cin>>c;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;
    cin>>s;
    int n = s.size();
    int i1;
    for(int i=0;i<n;i++){
        i1 = s1.find(s[i]);
        if(c=='R'){
            cout<<s1[i1-1];
        }
        else
        cout<<s1[i1+1];
    }
    return 0;
    }
