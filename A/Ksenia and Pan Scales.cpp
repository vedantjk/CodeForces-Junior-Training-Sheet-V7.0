    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        string s;
        cin>>s;
        string t;
        cin>>t;
        int ch=0;
        int r=0;
        int l=0;
        string l1;
        string r1;
       for(int i=0;i<s.size();i++){
        if(s[i]=='|')ch=1;
        else if(ch==0){
                l1.push_back(s[i]);
                l++;
        }
        else
       {
     
           r1.push_back(s[i]);
           r++;
        }
       }
       for(int i=0;i<t.size();i++){
        if(l<r){
     
           l1.push_back(t[i]);
            l++;
        }
        else if(r<l){
            r1.push_back(t[i]);
               r++;
        }
        else {
            r1.push_back(t[i]);
            r++;
        }
       }
      if(r==l)cout<<l1<<'|'<<r1;
      else cout<<"Impossible";
    }
