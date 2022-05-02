    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int k;
    cin>>k;
    int r;
    cin>>r;
    int n=1;
    while(true){
        int temp = (n*k)%10;
        if(temp==r || temp==0)
        {
            cout<<n;
            break;
        }
        n++;
    }
     
            return 0;
    }

