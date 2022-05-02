    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        
        char x;
        unordered_map<char,int> mp;
        while(cin>>x){
            if(x=='{')
            continue;
            else if(x==',')
            continue;
            else if(x=='}')
            break;
            else{
                mp[x]++;
            }
        }
        // for(auto it:mp)
        // cout<<it.first<<" "<<it.second<<"\n";
        cout<<mp.size();
     
        return 0;
    }
