#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<pll> balls(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> balls[i].second >> balls[i].first;
        }
        sort(balls.begin(), balls.end());

        ll pos = balls[0].second;
        bool ok = true;
        for (int i = 1; i < N; ++i)
        {
            if (pos < balls[i].second)
            {
                pos = balls[i].second;
            }
            else if (pos < balls[i].first)
            {
                pos++;
            }
            else
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }

    return 0;
}