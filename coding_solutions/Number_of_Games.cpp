// You wish to buy video games from the famous online video game store Mist. Usually, all games are sold at the same price, p dollars. However, they are planning to have the seasonal Halloween Sale next month in which you can buy games at a cheaper price. Specifically, the first game will cost p dollars, and every subsequent game will cost d dollars less than the previous one. This continues until the cost becomes less than or equal to dollars, after which every game will cost m dollars. How many games can you buy during the Halloween Sale? Input Format The first line of input contains four space-separated characters, p , d , m , s where p is the price of the first game, d is the discount from the previous game price, m is the minimum cost of a game and s is the starting budget Constraints 1 ≤ m ≤ p ≤ 100 1 ≤ d ≤ 100 1 ≤ s ≤ 10 4 Output Format Print the total number of games you can buy during the Halloween Sale Sample Input 1 20 3 6 80 Sample Output 1 6 Explanation The following are the costs of the first 11 , in order: 20 , 17 , 14 , 11 , 8 , 6 , 6 , 6 , 6 , 6 , 6 , ........... With a budget of 80 , you can buy 6 games at a cost of 20 + 17 + 14 + 11 + 8 + 6 = 76 . A 7 t h game for an additional 6 units exceeds the budget. Example Input 20 3 6 80 Output 6

#include <iostream>
using namespace std;
int main() {
    long long int p ,d , m ,s;
    std::cin >> p >> d >> m >> s;
    long int count = 0;
    while(s > p ){
        if((s-p) > 0 ){
            count ++;
            s=s-p;
        }
        if( (p-d)>m){
                p = p-d;
            }
        else{
            count = count + (s/m);
            break;
            }
        
    }
    std::cout << count << std::endl;count;
    
}