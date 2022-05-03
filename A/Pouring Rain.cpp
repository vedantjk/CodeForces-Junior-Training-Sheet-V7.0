    #include <bits/stdc++.h>
    using namespace std;
    const float pi = 3.14159;
    int main() {
    int d,h,v,e;
    cin>>d>>h>>v>>e;
    if(e>v && h!=0){
        cout<<"NO";
        return 0;
    }
    // if(e==v && h!=0)
    // {
    //     cout<<"NO";
    //     return 0;
    // }
    if( h==0){
        cout<<"YES\n"<<0;
        return 0;
    }
    float a = pi*d*d/4;
    float t = h/((v/a)-e);
    if(t>0){
    cout<<"YES"<<"\n";
    cout<<setprecision(10)<<t;
    }
    else
    cout<<"NO";
    return 0;
    }
