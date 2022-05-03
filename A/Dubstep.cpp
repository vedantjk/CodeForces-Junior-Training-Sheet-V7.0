    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    string s;
    cin>>s;
    vector<int> v;
        int index = 0;
        while ((index = s.find("WUB", index)) != string::npos) {
            v.push_back(index);
            // cout<<index<<" ";
            index += 3;
        }
        // cout<<"\n";
        int n = v.size();
        if(n!=0){
        string ans;
    for(int i = 0;i<v[0];i++)
        ans+=s[i];
        ans+=" ";
        bool flag = false;
        for(int i=0;i<n-1;i++){
            int low = v[i]+3;
            int high = v[i+1];
         while(low<high){
                ans+=s[low];
                low++;
                flag = true;
         }
         if(flag == true){
         ans+=" ";
         flag = false;
         }
        }
        int in = v[n-1]+3;
        for(int i=in;i<s.size();i++)
        ans+=s[i];
        cout<<ans;
            
        }
        else if(n==0)
        cout<<s;
    return 0;
    }
