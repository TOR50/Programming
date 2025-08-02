// There are n piles of coins, where the i t h pile has a i coins. You need to collect the maximum number of coins from these piles, but you must fulfill the following condition: Let us say you pick x i coins from the i t h pile, then: x 1 + x 3 + x 5 … = x 2 + x 4 + x 6 . . . 0 ≤ x i ≤ a i For example, if n = 3 and, a = [ 2 , 3 , 2 ] , you can pick the coins as x = [ 1 , 2 , 1 ] because x 1 + x 3 = 1 + 1 = 2 and x 2 = 2 . Find the maximum total number of coins you can pick. Input Format The first line of input contains a single integer n denoting the number of piles. The second line of input contains n space-separated integers a i , where the i t h integer denoted the number of coins in i t h pile. Constraints 2 ≤ n ≤ 10 5 1 ≤ a i ≤ 10 3 Output Format Print a single integer denoting the maximum total number of coins you can pick. Sample Input 1 4 5 1 1 4 Sample Output 1 10 Explanation Let x = [ 4 , 1 , 1 , 4 ] hence x 1 + x 3 = x 2 + x 4 and total number of coins picked is 10 . It can be checked that it is not possible to pick any greater number of coins. Example Input 4 5 1 1 4 Output 10

#include <iostream>
using namespace std;
int main() {
    int n;
    std::cin >> n;
    int a=0;
    int b=0;
    for(int i = 1 ; i<= n ; i++){
        if(i%2==0){
        int s;
        cin >> s;
        a+=s;    
        }else{
        int s;
        cin >> s;
        b+=s;
        }
    }
    if(a<=b){
        std::cout << a+a << std::endl;
    }
    else{
        cout<<b+b;
    }
    return 0;
}