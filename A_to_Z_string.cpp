#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

   
    size_t start = s.find('A');

    size_t end = s.rfind('Z', s.length());

   
    int length = end - start + 1;

    cout << length << endl;

    return 0;
}
