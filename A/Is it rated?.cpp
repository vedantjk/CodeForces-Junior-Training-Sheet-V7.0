    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    cin>>n;
    int a[n];
    int t1,t2;
    bool flag = true;
    for(int i=0;i<n;i++){
        cin>>t1>>t2;
        if(t1!=t2){
            cout<<"rated";
            return 0;
        }
        else{
            a[i]=t1;
            if(i!=0){
                if(a[i]>a[i-1])
                flag = false;
            }
        }
    }
    if(flag == true)
    cout<<"maybe";
    if(flag == false)
    cout<<"unrated";
    return 0;
    }
