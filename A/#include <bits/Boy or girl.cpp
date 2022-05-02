        #include <bits/stdc++.h>
        #include<iostream> 
        using namespace std;
         
        int main(){
            string a;
            cin>>a;
            unordered_set<char> s;
                for (int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        int n = s.size();
        if(n%2==0)
        cout<<"CHAT WITH HER!";
        else
        cout<<"IGNORE HIM!";
            return 0;
        }
