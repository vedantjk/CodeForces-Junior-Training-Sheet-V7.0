    #include <bits/stdc++.h>
    using namespace std;
    bool isPrime(int n){
        if(n<=1) return false;
        if(n<=3) return true;
         if (n%2 == 0 || n%3 == 0) return false;
       
        for (int i=5; i*i<=n; i=i+6)
            if (n%i == 0 || n%(i+2) == 0)
               return false;
       
        return true;
    }
     
    int main() {
    int n,m;
    cin>>n>>m;
    int ans;
    n++;
    while(true){
        bool found = isPrime(n);
        if(found==true){
        ans = n;
        break;
        }
        n++;
    }
    if(ans==m)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
    }
