    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
            long long n, minimum = 1e9 + 10;
        bool imp = true;
        string d;
        vector<long long>x;
        cin >> n >> d;
     
        for(int i = 0; i < n; i++)
        {
            long long y;
            cin >> y;
            x.push_back(y);
        }
     
        for(int i = 0; i < n - 1; i++)
        {
            if(d[i] == 'R' && d[i + 1] == 'L')
            {
                imp = false;
                long long time = (x[i + 1] - x[i])/2;
                minimum = min(time, minimum);
            }
        }
        (imp == true) ? cout << -1 : cout << minimum;
        return 0;
    }
