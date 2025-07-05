#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


class Card {
protected:
    string holderName;
    string cardNumber;
    string expiryDate;

public:
    Card() {}

    Card(string holderName, string cardNumber, string expiryDate) {
        this->holderName = holderName;
        this->cardNumber = cardNumber;
        this->expiryDate = expiryDate;
    }

    string getHolderName() {
        return holderName;
    }

    string getCardNumber() {
        return cardNumber;
    }

    string getExpiryDate() {
        return expiryDate;
    }

   
    void setHolderName(string name) {
        holderName = name;
    }

    void setCardNumber(string number) {
        cardNumber = number;
    }

    void setExpiryDate(string date) {
        expiryDate = date;
    }


    virtual void display() = 0;
};


class PaybackCard : public Card {
private:
    int pointsEarned;
    double totalAmount;

public:
    PaybackCard(string holderName, string cardNumber, string expiryDate, int pointsEarned, double totalAmount)
        : Card(holderName, cardNumber, expiryDate) {
        this->pointsEarned = pointsEarned;
        this->totalAmount = totalAmount;
    }


    int getPointsEarned() {
        return pointsEarned;
    }

    double getTotalAmount() {
        return totalAmount;
    }


    void setPointsEarned(int points) {
        pointsEarned = points;
    }

    void setTotalAmount(double amount) {
        totalAmount = amount;
    }

    void display() override {
        cout << holderName << "'s Payback Card Details:" << endl;
        cout << "Card Number " << cardNumber << endl;
        cout << "Points Earned " << pointsEarned << endl;
        cout << fixed<< setprecision(1)<< "Total Amount " << totalAmount << endl;
    }
};


class MembershipCard : public Card {
private:
    int rating;

public:
    MembershipCard(string holderName, string cardNumber, string expiryDate, int rating)
        : Card(holderName, cardNumber, expiryDate) {
        this->rating = rating;
    }


    int getRating() {
        return rating;
    }

    void setRating(int r) {
        rating = r;
    }

    void display() override {
        cout << holderName << "'s Membership Card Details:" << endl;
        cout << "Card Number " << cardNumber << endl;
        cout << "Rating " << rating << endl;
    }
};

int main() {
    int choice;
    string input;

    cout << "Select the Card" << endl;
    cout << "1. Payback Card" << endl;
    cout << "2. Membership Card" << endl;

    cin >> choice;
    cin.ignore(); // VERY IMPORTANT to consume the leftover newline

    if (choice == 1) {
        cout << "Enter the Card Details:" << endl;
        getline(cin, input);

        stringstream ss(input);
        string holderName, cardNumber, expiryDate;
        getline(ss, holderName, '|');
        getline(ss, cardNumber, '|');
        getline(ss, expiryDate, '|');

        int points;
        double amount;
        cout << "Enter points in card" << endl;
        cin >> points;
        cout << "Enter Amount" << endl;
        cin >> amount;

        PaybackCard card(holderName, cardNumber, expiryDate, points, amount);
        card.display();

    } else if (choice == 2) {
        cout << "Enter the Card Details:" << endl;
        getline(cin, input);

        stringstream ss(input);
        string holderName, cardNumber, expiryDate;
        getline(ss, holderName, '|');
        getline(ss, cardNumber, '|');
        getline(ss, expiryDate, '|');

        int rating;
        cout << "Enter rating in card" << endl;
        cin >> rating;

        MembershipCard card(holderName, cardNumber, expiryDate, rating);
        card.display();

    } else {
        cout << "Invalid Choice" << endl;
    }

    return 0;
}