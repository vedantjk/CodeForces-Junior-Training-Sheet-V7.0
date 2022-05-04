    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    long long x;
    cin>>x;
    if(x==1){
        cout<<1;
        return 0;
    }
    	int n=0;
    	while(x!=0){
    		int m=x%2;
    		n+=m;
    		x/=2;
    	}
    	cout<<n;
    return 0;
    }
