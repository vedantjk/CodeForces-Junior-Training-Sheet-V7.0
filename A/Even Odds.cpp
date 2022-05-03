    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    long long n,k;
    cin>>n>>k;
    long long i=1;
    if(n%2==0){
    if(k-1<ceil(n/2.0)){
        cout<<(2*(k-1)+1);
    }
    else{
        cout<<2*(k-(n/2));
    }
    }
    else if(n%2!=0){
        if(k-1<=n/2)
        cout<<(2*(k-1)+1);
        else
        cout<<2*(k-1-(n/2));
    }
    return 0;
    }
