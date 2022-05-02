    #include<iostream>
    using namespace std;
    int main(){
        int l,b;
        cin>>l>>b;
        int years=0;
        while(l<=b){
            l=3*l;
            b=2*b;
            years++;
        }
        cout<<years;
        return 0;
    }
