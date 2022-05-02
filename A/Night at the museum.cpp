    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        string s;
        cin>>s;
        int d = abs(s[0]-'a');
        if(d>13)
        d=26-d;
        int ans=d;
        int a=s.size();
     for(int i=0;i<a-1;i++)
            {
                d=abs(s[i]-s[i+1]);
     
                if(d<=13)
                  ans+=d;
                else
                {
                    ans+=(26-d);
                }
            }
     
            cout<<ans;
     
            return 0;
    }
