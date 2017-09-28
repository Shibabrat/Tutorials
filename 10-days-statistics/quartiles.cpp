#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Computes median of an input vector of size N
int get_median(vector<int> data, int N){

    int midPos, median;

    if ( N % 2 == 0 ){
        midPos = N / 2 - 1;
        median = 0.5*( data[midPos] + data[midPos+1] );
    }
    else{
        midPos = N / 2;
        median = data[midPos];
    }

    return median;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, tempVal, xi, quart1, quart2, quart3;
    int tempIdx;
    vector<int> vec;
    vector<int> subVec1;
    vector<int> subVec2;

    cin >> n;
    for (unsigned int i = 0; i < n; i++){
        cin >> tempVal;
        vec.push_back(tempVal);

    }

    sort( vec.begin(), vec.end() );
    if ( n % 2 != 0 ){ // odd number of data, split around median
        for (unsigned int i = 0; i < n/2; i++){
            subVec1.push_back(vec[i]);
        }
        for (unsigned int k = n/2 + 1; k < n; k++){
            // tempIdx = k - n/2 - 1;
            subVec2.push_back(vec[k]);
        }
    }
    else{
        for (unsigned int i = 0; i < n/2; i++){    
            subVec1.push_back(vec[i]);
        }
        for (unsigned int k = n/2; k < n; k++){
            // tempIdx = k - n/2;
            subVec2.push_back(vec[k]);
        } 
    }

    quart1 = get_median(subVec1, n/2);
    quart2 = get_median(vec, n);
    quart3 = get_median(subVec2, n/2);

    printf("%d \n%d \n%d \n", quart1, quart2, quart3);
    // cout << quart2 << endl;

    return 0;
}
    