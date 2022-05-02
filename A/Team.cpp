    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int ans=0;
        while(n>0){
            int f1,f2,f3;
            cin>>f1>>f2>>f3;
            int temp = f1+f2+f3;
            if(temp>=2)
            ans++;
            n--;
        }
        cout<<ans;
        return 0;
    }
