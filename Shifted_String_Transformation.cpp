#include <iostream>
#include <string>

using namespace std;

string shiftString(const string& input, int k) {
    string result = input;

    for (char& c : result) {
        c = ((c - 'a' - k + 26) % 26) + 'a';
    }

    return result;
}

string canConvert(const string& A, const string& B) {
    for (int k = 0; k < 26; ++k) {
        string shiftedA = shiftString(A, k);
        
        if (shiftedA == B) {
            return "Yes";
        }
    }

    return "No";
}

int main() {
    // Input
    string A, B;
    cin >> A >> B;

    // Output
    string result = canConvert(A, B);
    cout << result << endl;

    return 0;
}
