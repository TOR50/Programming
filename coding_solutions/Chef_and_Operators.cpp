// Ram has just started Programming, he is in first year of Engineering. Ram is reading about Relational Operators.
// Relational Operators are operators which check relationship between two values. Given two numerical values 
// A and B you need to help Ram in finding the relationship between them that is,

// First one is greater than second or,
// First one is less than second or,
// First and second one are equal.
// Input Format

// First line contains an integer T, which denotes the number of testcases. Each of the T lines contain two integers A and B.
// .
// Constraints 1≤T≤100001≤A, B≤1000000001
// Output Format For each line of input produce one line of output. This line contains any one of the relational operators "<" , ">" , "="
// Sample Input 1
// 3
// 10 20
// 20 10
// 10 10

// Sample Output 1
// <
// >
// =

// Explanation
// 10 is less than 20, so answer is <

// Example
// Input
// 3
// 10 20
// 20 10
// 10 10
// Output
// <
// >
// =

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;
        if (a < b){
            std::cout << "<" << std::endl;
        }
        else if(a > b){
            std::cout << ">" << std::endl;
        }else if (a=b){
            std::cout << "=" << std::endl;
        }
        
    }
}
