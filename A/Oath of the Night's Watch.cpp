    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    int count=0;
    cin>>n;
    long long a[n];
    long long min=9999999999;
    long long max=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<min)
    min=a[i];
    else if(a[i]>max)
    max=a[i];
    }
    // cout<<min<<" "<<max<<"\n";
    for(int i=0;i<n;i++){
        if(a[i]>min && a[i]<max)
        count++;
    }
    cout<<count;
    return 0;
    }
