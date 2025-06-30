/*You went on a tour to Ooty with your friends. As a part of the tour, you went boating with them. For the boat to remain stable, 
the number of people on one boat is restricted based on the weight of the people. 
You find that the boatman who is sailing your boat is so much greedy of money. For earning more, he takes too many people to travel in the boat at a time.
So you want to check how many people can travel in the boat at a time so that the boat will not drown. Calculate the weight by considering the number of adults and number of children.
Assume that an adult weighs 75 kg and children weigh 30 kg each. If the weight is normal, display Boat is stable, else display Boat will drown. INPUT & OUTPUT FORMAT: Input consists of 3 integers.
First input corresponds to the weight that the boat can handle. Second input corresponds to the number of adults.
Third input corresponds to the number of children.*/



solution  
#include <iostream>
using namespace std;

int main() {
    int maxWeight, numAdults, numChildren;
    cin >> maxWeight >> numAdults >> numChildren;
    int adultWeight = 75;
    int childWeight = 30;
    int totalWeight = (numAdults * adultWeight) + (numChildren * childWeight);
    if (totalWeight <= maxWeight) {
        cout << "Boat is stable";
    } else {
        cout << "Boat will drown";
    }

    return 0;
}
