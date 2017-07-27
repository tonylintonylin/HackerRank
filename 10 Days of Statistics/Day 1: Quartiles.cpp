#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int length;
    int Q1;
    int Q2;
    int Q3;
    
    cin >> length;
    
    int arr[length];
    for(int i = 0; i < length; i++){
        cin >> arr[i];
    }
    
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
        
    if(length % 2 == 0){
        Q2 = (arr[length/2 - 1] + arr[length/2]) / 2;
    }
    else{
        Q2 = arr[length/2];
    }
    
    Q1 = (arr[length/2/2 - 1] + arr[length/2/2]) / 2;
    
    int anotherArr[length/2];
    int anotherLength;
    //copy upper values into anotherArr
    for(int i = 0; i < length/2; i++){
        if(length % 2 == 0)
            anotherArr[i] = arr[i + length/2];
        else
            anotherArr[i] = arr[i + length/2 + 1];
        anotherLength++;
    }
        
    int n2 = sizeof(anotherArr)/sizeof(anotherArr[0]);
    sort(anotherArr, anotherArr+n2);
    
    if(anotherLength % 2 == 0){
        Q3 = (anotherArr[anotherLength/2 - 1] + anotherArr[anotherLength/2]) / 2;
    }
    else{
        Q3 = anotherArr[anotherLength/2];
    }

    cout << Q1 << "\n" << Q2 << "\n" << Q3;
    
    return 0;
}

/*
Input (stdin)
9
3 7 8 5 12 14 21 13 18

Your Output (stdout)
6
12
16
*/
