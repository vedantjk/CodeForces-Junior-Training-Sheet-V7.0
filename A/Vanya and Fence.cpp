    #include<iostream>
    using namespace std;
    int main(){
        int n,h;
        cin>>n>>h;
        int heights[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>heights[i];
            if(heights[i]>h)
            ans=ans+2;
            else
            ans++;
        }
        cout<<ans;
        return 0;
    }
