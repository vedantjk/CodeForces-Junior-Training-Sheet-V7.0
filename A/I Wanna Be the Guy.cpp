    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int temp;
        cin>>temp;
        mp[temp++];
    }
    int t1;
    cin>>t1;
    for(int i=0;i<t1;i++){
        int temp1;
        cin>>temp1;
        mp[temp1++];
    }
    if(mp.size()==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
     
    return 0;
    }
