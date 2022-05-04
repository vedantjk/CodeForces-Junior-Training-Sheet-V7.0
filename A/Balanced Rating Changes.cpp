    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
       int n;
       cin>>n;
       int f = 0;
         for(int i=0;i<n;i++)
      {
        int a;
        cin>>a;
        if(a%2==0)
        {
          cout<<a/2<<"\n";
        }
        else
        {
          if(a>0)
            {
              if(f==0)
            {
            cout<<ceil((a+1)/2)<<"\n";
            f=1;
            }
              else if(f==1)
              {
                cout<<floor((a)/2)<<"\n";
                
                f=0;
              }
            }
            else if(a<0)
            {
              if(f==0)
            {
            cout<<ceil(a/2)<<"\n";
            //cout<<f<<" k";
            f=1;
            }
              else if(f==1)
              {
                cout<<floor((a-1)/2)<<"\n";
                
                f=0;
              }
     
            }
          }
        }
        return 0;
    }
