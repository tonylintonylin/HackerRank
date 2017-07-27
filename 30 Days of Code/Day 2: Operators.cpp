#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double mealCost;
    int tipPercent;
    int taxPercent;
    double total;
    
    cin >> mealCost >> tipPercent >> taxPercent;
    
    //tipPercent and 100 are both ints, resulting in a int 
    double tip = mealCost * (double(tipPercent)/100);
    double tax = mealCost * (double(taxPercent)/100);
    
    total = mealCost + tip + tax;
    
    //round the total cost
    int roundCost;
    roundCost = total + 0.5;
    
    cout << "The total meal cost is " << roundCost << " dollars.";
    
    return 0;
}

/*
Input (stdin)
12.00
20
8

Your Output (stdout)
The total meal cost is 15 dollars.
*/
