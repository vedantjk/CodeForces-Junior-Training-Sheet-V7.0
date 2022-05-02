    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        vector<int> a(4);
        for (auto &x : a)
            cin >> x;
        string s;
        cin >> s;
        int res = 0;
        for (auto i : s)
            res += a[(i - '0') - 1];
        cout << res;
        return 0;
    }
