#include <iostream>
#include <string>
using namespace std;
class Match {
public:
    void displayMatchDetails(string matchDate) {
        string day = matchDate.substr(0, 2);
        string month = matchDate.substr(3, 2);
        string year = matchDate.substr(6, 4);
        cout << "Match Date: " << month << "-" << day << "-" << year << endl;
    }
    void displayMatchDetailsVenue(string venue) {
        size_t commaPos = venue.find(',');
        string stadium = venue.substr(0, commaPos);
        string city = venue.substr(commaPos + 1);
        cout << "Stadium: " << stadium <<endl<< "City: " << city << endl;
    }
    void displayMatchDetails(string winnerTeam, long runs) {
        cout << winnerTeam << " won by " << runs << " runs." << endl;
    }
};
int main() {
    Match m;
    int choice;
    cin >> choice;
    cin.ignore(); 
    if (choice == 1) {
        string date;
        getline(cin, date);
        m.displayMatchDetails(date);
    }
    else if (choice == 2) {
        string venue;
        getline(cin, venue);
        m.displayMatchDetailsVenue(venue);
    }
    else if (choice == 3) {
        string team;
        long runs;
        cin >> team >> runs;
        m.displayMatchDetails(team, runs);
    }
    else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
