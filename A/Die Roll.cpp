    #include <bits/stdc++.h>
    using namespace std;
     
    int findGCD(int a, int b) {
       if (b == 0)
          return a;
          return findGCD(b, a % b);
       }
       void lowestFraction(int num1, int num2){
          int denom;
          denom = findGCD(num1,num2);
          num1/=denom;
          num2/=denom;
     
          cout<<num1<<"/"<<num2;
           
       }
     
    int main() {
    int n,m;
    cin>>n>>m;
    int temp = max(n,m);
    int num = 6-temp+1;
    if(num%2==0 || num%3==0){
        lowestFraction(num,6);
    }
    else
    cout<<num<<"/6";
     
    return 0;
    }
