#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> caesar_cipher_lite(const string& plaintext, const string& ciphertext) {
  int n = plaintext.size();
  vector<int> key(n);

  for (int i = 0; i < n; ++i) {
    // Calculate the difference modulo 26 to handle cyclic shifts.
    int diff = (ciphertext[i] - plaintext[i] + 26) % 26;
    key[i] = diff/3;
  }

  return key;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    string plaintext, ciphertext;

    cin >> n;
    cin >> plaintext >> ciphertext;

    vector<int> key = caesar_cipher_lite(plaintext, ciphertext);

    // Print the key with spaces.
    for (int i = 0; i < n; ++i) {
      cout << key[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
