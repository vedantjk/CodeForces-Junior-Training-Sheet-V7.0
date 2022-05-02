        #include <bits/stdc++.h>
        #include<iostream> 
        #include<cctype>
        using namespace std;
         
        int main(){
            string a;
            cin>>a;
            int low=0;
            int high=0;
            for(int i=0;i<a.size();i++){
                if(islower(a[i]))
                low++;
                else if(isupper(a[i]))
                high++;
            }
            if(low>=high){
            for(int i=0;i<a.size();i++){
                cout<<(char) tolower(a[i]);
            }}
            if(high>low){
            for(int i=0;i<a.size();i++){
                cout<<(char) toupper(a[i]);
            }}
            return 0;
        }
