    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int int_angle;
        cin>>int_angle;
        int j=3;
        bool flag = false;
        while(true){
            if(((j-2)*180)/j == int_angle && ((j-2)*180)%j == 0){
                cout<<"YES"<<"\n";
                break;
            }
            else if(((j-2)*180)/j<int_angle){
                j++;
            }
            else{
                flag= true;
                break;
            }
        }
        if(flag==true)
        cout<<"NO"<<"\n";
    }
    return 0;
    }
