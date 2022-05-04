

    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    int n,k;
    cin>>n>>k;
    int ans = 0;
    for(int i=0;i<n;i++){
        int t1,t2;
        cin>>t1>>t2;
        ans+=t2-t1+1;
    }
    int x = ans%k;
    if(x!=0)
    cout<<k-x;
    else
    cout<<x;
        return 0;
    }
