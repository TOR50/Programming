// Ram came across a special trapezium in which non - parallel sides are equal in length and named it as isosceles trapezium. He thought of making a circular closed loop by joining the edges of this isosceles trapezium. You are given a base angle 
// x of the isosceles trapezium click here. Your task is to calculate the total number of isosceles trapeziums required to form a closed loop.

// Input Format

// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, one integer x.
// Constraints

// 1≤T≤1001≤x≤89
// Output Format
// For each testcase, output in a single line the total number of isosceles trapeziums required to form a closed circular loop. It is guaranteed that the answer will be always a natural number.
// Sample Input 1
// 1
// 80

// Sample Output 1
// 18

// Explanation
// 18 isosceles trapeziums are required to form a closed circular loop

// Example
// Input
// 1
// 80
// Output
// 18

#include <iostream>
using namespace std;
int main() {
    int t;
    std::cin >> t;
    while(t--){
        int a ;
        std::cin >> a;
        a=a*2;
        a=180-a;
        std::cout << 360/a << std::endl;
    }
    
    return 0;
}