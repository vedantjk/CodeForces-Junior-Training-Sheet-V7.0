    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        long long n;
        cin>>n;
        stack<int> st;
        while(n>0){
            int temp = n%10;
            
            if(n==9){
                st.push(9);
                break;
            }
            if(temp> 9-temp)
            st.push(9-temp);
            else 
            st.push(temp);
            n/=10;
        }
        bool flag = false;
        int size = st.size();
        for(int i=0;i<size;i++){
            if(st.top()!=0)
            flag = true;
            if(flag)
            cout<<st.top();
            st.pop();
        }
    return 0; 
     
    }
