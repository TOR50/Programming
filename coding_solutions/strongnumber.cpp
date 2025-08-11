#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    int test = n;
    int sumn = 0;

    if(n == 0){
        std::cout << "Not a SStrong number" << std::endl;
        return 0;
    }

    while (n>0){
        int fact = 1 , i =1;
        int a = n % 10;
        
        while (i <= a){
            fact *= i;
            i++; 
        }
        sumn +=fact;
        n /=10;
    }
    if(sumn == test){
        std::cout << "Strong number" << std::endl;
    }
    else{
        std::cout << "Not a Strong number" << std::endl;
    }
}
