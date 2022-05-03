    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n,k;
    cin>>n>>k;
    int a[(2*n)+1];
    for(int i=0;i<((2*n)+1);i++)
    cin>>a[i];
    int times = 0;
    for(int i=1;i<((2*n)+1);i++){
        if(times<k){
        bool peak = false;
        if(a[i]>a[i-1]+1 && a[i]>a[i+1]+1)
        peak = true;
        if(peak==true){
            a[i]--;
            times++;
        }
        }
    }
    for(int i=0;i<(2*n)+1;i++){
        cout<<a[i]<<" ";
    }
     
     return 0; 
     
    }
