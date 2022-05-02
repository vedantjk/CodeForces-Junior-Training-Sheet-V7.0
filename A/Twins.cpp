

    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int ans=0;
    int sum_ans=0;
    sort(a,a+n,greater <>());
    for(int i=0;i<n;i++){
        sum_ans+=a[i];
        ans++;
        if(sum_ans>sum-sum_ans){
            cout<<ans;
            break;
        }
    }
    return 0;
    }
