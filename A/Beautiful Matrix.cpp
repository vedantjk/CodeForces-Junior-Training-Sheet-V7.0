    #include<iostream>
    using namespace std;
    int main(){
       int a[5][5];
       int row1,col1;
       for(int i=0;i<5;i++){
           for(int j=0;j<5;j++){
               cin>>a[i][j];
               if(a[i][j]==1)
               {
                   row1=i+1;
                   col1=j+1;
               }
           }
       }
       cout<<abs(row1-3)+abs(col1-3);
        return 0;
    }
