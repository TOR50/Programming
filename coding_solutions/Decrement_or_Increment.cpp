// Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1 . Input Format First line will contain a number N Constraints 0 ≤ N ≤ 1000 Output Format Output a single line, the new value of the number. Sample Input 1 5 Sample Output 1 4 Explanation Since 5 is not divisible by 4 hence, its value is decreased by 1 Example Input 5 Output 4

#include <iostream>
using namespace std;
int main() {
     int n;
     std::cin >> n;
     if(n%4==0){
         n++;
         std::cout << n << std::endl;
     }else{
         cout<< --n;
     }
    
    return 0;
}