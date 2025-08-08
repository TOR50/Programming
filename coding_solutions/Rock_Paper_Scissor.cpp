// Jon and his friend are playing Rock, Paper and Scissors. It is known that they played N rounds in which Jon played R1 times rock, P1 time paper and S1 times scissors and his friend played R2 times rock, P2 time paper and S2 times scissors. In each round, his friend plays first. Given N,R1,P1,S1,R2,P2 and S2, find out if Jon can win the game if he plays optimally. To win he should win more than ceil(N/2) rounds. A draw is not considered a win. Note that in rock-paper-scissors - rock beats scissors, paper beats rock and scissors beat paper. Input Format The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows The first line of each test case contains one integer N The second line of each test case contains three space-separated integers R1, P1 and S1 The third line of each test case contains three space-separated integers R2, P2 and S2 Constraints 1 ≤ T ≤ 10 5 1 ≤ N , R 1 , P 1 , S 1 , R 2 , P 2 , S 2 ≤ 10 9 R 1 + P 1 + S 1 = R 2 + P 2 + S 2 = N Output Format For each test case, print the "Yes" (without quotes) if Jon can win or "No" (without quotes) otherwise. Sample Input 1 2 3 1 1 1 1 1 1 10 8 1 1 6 3 1 Sample Output 1 Yes No Explanation When his friend will play paper, Jon will play scissors then when his friend will play rock, Jon will play paper and when his friend will play scissors, Jon will play rock. Jon can win 3 rounds, hence he can win the game. Example Input 2 3 1 1 1 1 1 1 10 8 1 1 6 3 1 Output Yes No


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int r1, p1, s1, r2, p2, s2;
        cin >> r1 >> p1 >> s1;
        cin >> r2 >> p2 >> s2;

        long long int max_wins = (min(r1, s2) + min(p1, r2) + min(s1, p2));
    if (max_wins > (n + 1) / 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}