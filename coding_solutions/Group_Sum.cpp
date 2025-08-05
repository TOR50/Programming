// The positive odd numbers are sorted in ascending order as 1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , . . . . . , and grouped as ( 1 ) , ( 3 , 5 ) , ( 7 , 9 , 11 ) , and so on. Thus, the first group is ( 1 ) , the second group is ( 3 , 5 ) , the third group is ( 7 , 9 , 11 ) , etc. In general, the k t h group contains the next k elements of the sequence. Given k , find the sum of the elements of the k t h group. For example, for k = 3 , the answer is 27 : Input Format The first line contains a single integer k Constraints 1 ≤ k ≤ 10 6 Output Format Print the sum of the elements of the k t h group. Sample Input 1 3 Sample Output 1 27 Explanation We have k = 3 . The 3 r d group is ( 7 , 9 , 11 ) and the sum of its elements is 7 + 9 + 11 = 27 . Example Input 3 Output 27

#include <iostream>
using namespace std;
int main() {
    long int k ;
    std::cin >> k ;
    long int x = k*k;
    
    std::cout << x*k << std::endl;
    return 0;
}