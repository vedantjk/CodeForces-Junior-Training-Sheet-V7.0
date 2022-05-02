    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n; cin>>n;int j[n];int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>j[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(j[i]!=j[i+1])
            count++;
        }
       cout<<count;
        return 0;
    }
