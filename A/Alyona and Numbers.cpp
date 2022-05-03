    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n,m;
    cin>>n>>m;
    long long count = 0;
    vector<int> a,b,c,d,e;
    for(int i=1;i<=n;i++){
        if(i%5==0) a.push_back(i);
        else if(i%5==1) b.push_back(i);
        else if(i%5==2) c.push_back(i);
        else if(i%5==3) d.push_back(i);
        else e.push_back(i);
    }
     
    for(int i=1;i<=m;i++){
        if(i%5==0) count+=a.size();
        else if(i%5==1) count+=e.size();
        else if(i%5==2) count+=d.size();
        else if(i%5==3) count+=c.size();
        else count+=b.size(); 
    }
    cout<<count;
     return 0; 
     
    }
