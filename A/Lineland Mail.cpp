    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<"\n";
        }
        else if(i==n-1){
            cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<"\n";
        }
        else{
            if(abs(a[i]-a[i-1])>abs(a[i]-a[i+1]))
            cout<<abs(a[i]-a[i+1])<<" ";
            else
            cout<<abs(a[i]-a[i-1])<<" ";
            int t1= abs(a[i]-a[0]);
            int t2= abs(a[i]-a[n-1]);
            int w = max(t1,t2);
            cout<<w<<"\n";
        }
    }
    return 0;
    }
