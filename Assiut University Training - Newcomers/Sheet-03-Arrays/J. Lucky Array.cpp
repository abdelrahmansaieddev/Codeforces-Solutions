#include <iostream>
#include <climits>
using namespace std;

static long long freq[200001];

int main() {
    int n;
    cin >> n;

    int minn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < minn)
            minn = x;
        freq[x + 100000]++;
        
    }
    if (freq[minn + 100000] % 2 != 0)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    return 0;
}
