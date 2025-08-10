// Input 
// Format The first line contains two integers a and b Constraints 1 ≤ a ≤ b ≤ 10 
// Output Format Print the number of years after which a will become strictly heavier than b Sample 
// Input 1 4 7 
// Sample Output 1 2 
// Explanation a weighs 4 and b weighs 7 initially. 
// After one year their weights are 4·3 = 12 and 7·2 = 14 respectively (one weight is tripled while the other one is doubled). 
// a is not heavier than b yet. After the second year, weights are 36 and 28, so the first weight is greater than the second one. 
// a became heavier than b after two years so you should print 2. Example Input 4 7 Output 2

#include <iostream>
using namespace std;
int main() {
    int a , b;
    std::cin >> a >> b;
    int count =0 ;
    while(a <= b){
        count ++;
        a=a*3;
        b=b*2;
    }
    std::cout << count << std::endl;
    return 0;
}