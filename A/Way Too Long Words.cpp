    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(s.size()<=10)
            cout<<s<<"\n";
            else{
                int temp= s.size();
                cout<<s[0]<<temp-2<<s[temp-1]<<"\n";
            }
        }
     
        return 0;
    }
