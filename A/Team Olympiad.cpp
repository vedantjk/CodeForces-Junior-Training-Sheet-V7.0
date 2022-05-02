    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int n;
    cin>>n;
     
    int c1=0,c2=0,c3=0;
    int a1[5000],a2[5000],a3[5000];
     
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            a1[c1]=i;
            c1++;
     
        }
        else if(x==2)
        {
            a2[c2]=i;
            c2++;
     
        }
        else if(x==3)
        {
            a3[c3]=i;
            c3++;
     
        }
    }
    int w=min({c1,c2,c3});
    cout<<w<<endl;
    for(int i=0;i<w;i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<" "<<endl;
    }
    return 0;
    }
