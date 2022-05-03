    #include <bits/stdc++.h>
    using namespace std;
    double dist(int x1,int x2,int y1,int y2){
        double l = (x1-x2)*(x1-x2);
        double r = (y1-y2)*(y1-y2);
        double ans = sqrt(l+r);
        return ans;
    }
    int main() {
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x1,y1;
        cin>>x1>>y1;
        v.push_back(make_pair(x1,y1));
    }
    double total_dist;
    for(int i=0;i<n-1;i++){
        int x1,x2,y1,y2;
        x1 = v[i].first;
        y1 = v[i].second;
        x2 = v[i+1].first;
        y2 = v[i+1].second;
        total_dist += dist(x1,x2,y1,y2);
    }
    cout<<setprecision(15)<<(total_dist*k)/50.0;
    return 0;
    }
