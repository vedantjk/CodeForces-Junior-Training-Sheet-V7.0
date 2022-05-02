

    #include <bits/stdc++.h>
    using namespace std;
    const int N = 100001;
    int a[N] = {0};
    int main() {
    int n;
    cin>>n;
    int m=n;
    for(int i=0;i<n;i++){
        int p;
           cin>>p;
             a[p]=1;//// marking the number of locations is actually sorting. 
             while(a[m]==1)
             {
                 printf("%d ",m);
                 m--;
             }
             printf("\n");
    }
    return 0;
    }
