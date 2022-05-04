    #define ll long long 
    #include <iostream>
     
    using namespace std;
     
    int main()
    {
       string s;
       cin>>s;
       ll int n= s.size();
       ll int res = n/2;
       ll count = 0;
       if(n%2==0) cout<<res;
       else{
           for (int i = 0; i < n; i++) {
               if (s[i] == '1'){
                   count =  count +1;
               }
           }
           if(count>1) cout<<(res+1);
          else cout<<res;
       }
       
        return 0;
    }
