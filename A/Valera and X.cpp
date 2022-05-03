    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
    char x,y;
    x=a[0][0];
    y=a[0][1];
    if(x==y){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(a[i][i]!=x || a[i][n-1-i]!=x || a[i][i] == y || a[i][n-1-i]==y){
        cout<<"NO";
        return 0;
    }
    for(int j = 0; j < n; j++){
                if(i != j && j != (n - (i + 1)))
                {
                    if(a[i][j] != y){
                        cout<<"NO";
                        return 0;
                    }
                }
        }
        
    }
     
    cout<<"YES";
    return 0;
    }
