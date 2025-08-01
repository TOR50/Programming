// You are given N elements A 1 , A 2 … A n and you have to create a new number by adding number of digits of each element. 
// If the number is prime then print “Yes” otherwise print “No”. Input Format First-line will contain T , number of test cases. 
// Then the test cases follow Each test case contains two lines of input First-line contains number of element, N Second-line 
// contains N elements A 1 , A 2 . . . A n Constraints 1 ≤ T ≤ 50 2 ≤ N ≤ 10 3 0 ≤ A [ i ] ≤ 10 18 Output Format For each test case, 
// output in a single line if the generated number is prime then print "Yes" otherwise "No". Sample Input 1 1 3 9 12 111 Sample Output 
// 1 No Explanation In the Given Test case : 9 − > 1 , 12 − > 2 , 111 − > 3 . So the generated number will be 6 ( 1 + 2 + 3 ) Since 6 
// is not prime so the answer will be N o Example Input 1 3 9 12 111 Output No

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int countDigits(long long n) {
    if (n == 0) return 1;
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            long long num;
            cin >> num;
            sum += countDigits(num);
        }
        if (isPrime(sum)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}