    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int police=0;
        int crimes=0;
        for(int i=0;i<n;i++){
            if(a[i]!=-1)
            police+=a[i];
            if(a[i]==-1){
                if(police==0)
                crimes++;
                else{
                if(police>0)
                police--;
                }
            }
        }
        cout<<crimes;
        return 0;
    }
