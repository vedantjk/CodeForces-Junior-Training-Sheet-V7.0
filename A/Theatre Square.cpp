    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    long long n,m,a;
    cin>>n>>m>>a;
    long long a1 = ceil((n/1.0)/a);
    long long a2 = ceil((m/1.0)/a);
    cout<<a1*a2;
    return 0;
    }
