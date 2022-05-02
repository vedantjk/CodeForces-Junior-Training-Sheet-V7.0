        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int c=0,ot=0,n,t,k,d;
           cin>>n>>t>>k>>d;
           float l=(float) n;
           float l2=(float) k;
         
        	   ot=ceil(l/l2)*t;
        	   c=d+t;
        	   if(c<ot )
        		   cout<<"YES"<<endl;
        	   else
        	   	   cout<<"NO"<<endl;
         return 0;
        }
