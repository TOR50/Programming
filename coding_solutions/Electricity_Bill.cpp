// Chef wants to calculate his Electricity bill, Help him to do so According to Conditions:-

// For First 50 units Rs 0.50/unit
// For next 100 units Rs 0.75/unit
// For next 100 units Rs 1.20/unit
// For unit above 250 Rs 1.50/unit
// An additional surcharge of 20% is added to the bill

// Input
// The first line contains N, number of units he consumed.

// Output
// Print the Bill Amount. Note: Use printf("%.2f) for controlling precision.

// Constraints 1 ≤ N ≤ 10000

// Input:150

// Output:120.00

// Example
// Input
// 150
// Output
// 120.00


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int units;
    cin >> units;

    double bill = 0.0;

    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    double surcharge = bill * 0.20;
    bill += surcharge;

    printf("%.2f\n", bill);

    return 0;
}