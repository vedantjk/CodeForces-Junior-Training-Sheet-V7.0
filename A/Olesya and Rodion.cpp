    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n,t;
    cin>>n>>t;
    int m=t;
    int count=0;
    while(m!=0){
        m = m/10;
        count++;
    }
    if(n-count>=0){
    cout<<t;
    for(int i=0;i<n-count;i++){
        cout<<0;
    }
    }
    else
    cout<<-1;
    return 0;
    }
