    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        string s;
        cin >> n >> s;
        bool flag1 = false, flag2 = false;
        int pos1 = -1, pos2 = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'R') {
                flag1 = true;
                pos1 = max(pos1, i + 1);
            }
            if (s[i] == 'L') {
                flag2 = true;
                pos2 = min(pos2, i + 1);
            }
        }
        if (!flag1) {
            cout << pos2 << ' ' << pos2 - 1;
        } else if (!flag2) {
            cout << pos1 << ' ' << pos1 + 1;
        } else {
            cout << pos1 << ' ' << pos2;
        }
     
     
        return 0;
    }
