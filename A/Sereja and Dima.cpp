    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int low,high;
        low=0;
        high=n-1;
        int s=0;
        int d=0;
        int flag = 0;
        while(low<=high){
            if(flag==0){
                if(a[low]>a[high]){
                    s+=a[low];
                    low++;
                }
                else{
                    s+=a[high];
                    high--;
                }
            }
            else{
                if(a[low]>a[high]){
                    d+=a[low];
                    low++;
                }
                else{
                    d+=a[high];
                    high--;
                }
            }
            flag= !flag;
        }
        cout<<s<<" "<<d;
        return 0;
    }
