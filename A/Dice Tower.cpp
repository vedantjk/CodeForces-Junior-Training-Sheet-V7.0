    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int t,top,bot;
    cin>>t>>top;
    bot=7-top;
    int f=1;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        if(x==top || x==bot || y==top || y==bot){f=0;}
    }
    if(f)cout<<"YES";
    else
        cout<<"NO";
     return 0;
     
    }
