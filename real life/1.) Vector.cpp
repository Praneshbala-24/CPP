#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, score;
    vector<int> scores;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter scores:\n";
    for (int i = 0; i < n; ++i) {
        cin >> score;
        scores.push_back(score);
    }

    sort(scores.begin(), scores.end());

    cout << "Sorted Scores:\n";
    for (int s : scores) cout << s << " ";
    cout << "\n";

    cout << "Top 3 Scores:\n";
    for (int i = scores.size() - 1; i >= max(0, (int)scores.size() - 3); --i)
        cout << scores[i] << " ";
    cout << "\n";

    return 0;
}
