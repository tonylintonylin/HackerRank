#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int num1;
    int num2;
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cin >> num1 >> num2;
    
    for(int i = num1; i <= num2; i++){
        if(i >= 1 && i <= 9){
            cout << num[i - 1] + "\n";
        }        

        else if(i >= 10){
            if(i % 2 == 0){
                cout << "even\n";
            }
            else
                cout << "odd\n";
        }
    }
    
    return 0;
}

/*
Input (stdin)
8
11

Your Output (stdout)
eight
nine
even
odd
*/
