    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        long long n,x;
        cin>>n>>x;
        int dis=0;
        for(int i=0;i<n;i++){
            char sign;
            int temp;
            cin>>sign>>temp;
            if(sign=='+'){
                x+=temp;
            }
            if(sign=='-'){
                if(x>=temp)
                x-=temp;
                else
                dis++;
            }
        }
        cout<<x<<" "<<dis;
     
        return 0;
    }
