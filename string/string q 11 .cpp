#include <iostream>
using namespace std;

int main() {
    string str;
    int vowelCount = 0, consonantCount = 0;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonantCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;
    return 0;
}
