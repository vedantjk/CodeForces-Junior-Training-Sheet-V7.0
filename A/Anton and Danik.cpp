    #include<iostream>
    using namespace std;
    int main(){
        int n;
        int ans = 0;
        cin>>n;
        char win[n];
        for(int i=0;i<n;i++){
            cin>>win[i];
            if(win[i]=='A')
            ans++;
        }
        if(ans>n-ans)
        cout<<"Anton";
        else if(ans<n-ans)
        cout<<"Danik";
        else
        cout<<"Friendship";
        return 0;
    }
