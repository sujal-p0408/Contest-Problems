#include <iostream>
#include <vector>

using namespace std;

string constructString(int n, vector<int>& a) {
    string result = "";
    vector<int> b(26, 0);

    for (int i : a) {
       char count_char = b[i] + 'a';
        result += count_char;
        b[i]++;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << constructString(n, a) << endl;
    }

    return 0;
}
