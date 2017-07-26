#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int length, mode;
    float sum, mean, median;
    
    cin >> length;
    
    int arr[length], occurences[length];
    
    for(int i = 0; i < length; i++){
        cin >> arr[i];
        sum += arr[i];
    }
        
    mean = sum / length;
    
    // Insertion sort
    for (int i = 0; i < length; i++){
        int j, temp;
		j = i;		
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
		}
	}
    
    if (length % 2 == 0)
        median = double(arr[length / 2] + arr[length / 2 - 1]) / 2;
    else
        median = arr[length / 2];
    
    for(int i = 0; i < length; i++){
        occurences[i] = 0;
    }
        
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(arr[i] == arr[j]){
                occurences[i] = occurences[i] + 1;
            }
        }           
    }
        
    int max = 1;
    mode = arr[0];
    for(int i = 0; i < length; i++){
        if(occurences[i] > max){
            max = occurences[i];
            mode = arr[i];
        }
    }
  
    cout << mean << "\n" << median << "\n" << mode;
    
    return 0;
}

/*
Input (stdin)
10
64630 11735 14216 99233 14470 4978 73429 38120 51135 67060

Your Output (stdout)
43900.6
44627.5
4978
*/
