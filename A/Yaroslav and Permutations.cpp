    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    int n;
     cin>>n;
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
     int a;
     cin>>a;
     mp[a]++;
     }
     int max = -1;
     for(auto x:mp){
         if(x.second>max)
         max = x.second;
     }
    //  cout<<max;
     if(max>ceil(n/2.0))
     cout<<"NO";
     else
     cout<<"YES";
    return 0;
    }
