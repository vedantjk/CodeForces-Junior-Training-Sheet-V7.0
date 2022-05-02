    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    int n,m;
    cin>>n;
    int w[n];
    for(int i=0;i<n;i++)
    cin>>w[i];
    cin>>m;
    for(int i=0;i<m;i++){
        int row,bird;
        cin>>row>>bird;
        if(row==1){
            
            w[row]+=w[row-1]-bird;
            w[row-1]=0;
            
        }
        else if(row==n){
            
            w[row-2]+=bird-1;
            w[row-1]=0;
            
        }
        else{
            w[row]+=w[row-1]-bird;
            w[row-2]+=bird-1;
            w[row-1]=0;
        }
    }
    for(int i=0;i<n;i++)
    cout<<w[i]<<"\n";
    return 0;
    }
