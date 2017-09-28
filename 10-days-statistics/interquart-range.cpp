#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

// Computes median of an input vector of size N
double get_median(vector<int> data, int N){

    int midPos; 
    double median;

    if ( N % 2 == 0 ){
        midPos = N / 2 - 1;
        median = 0.5*( data[midPos] + data[midPos+1] );
    }
    else{
        midPos = N / 2;
        median = static_cast<double> (data[midPos]);
    }

    return median;
}

void print_vec( vector<int> data, int N ){

    for (unsigned int i = 0; i < N; i++)
        printf("%d ", data[i]);
    printf("\n");

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, xi, count;
    double quart1, quart2, quart3;
    int tempIdx, tempVal;
    vector<int> vec;
    vector<int> wt;
    vector<int> fullVec;
    vector<int> subVec1;
    vector<int> subVec2;

    cin >> count;
    for (unsigned int i = 0; i < count; i++){
        cin >> tempVal;
        vec.push_back(tempVal);
    }
    for (unsigned int j = 0; j < count; j++){
        cin >> tempVal;
        wt.push_back(tempVal);
        n += tempVal;
    }

    // Arrange the ordered elements with the corresponding frequencies
    for (unsigned int i = 0; i < count; i++){
        for (unsigned int j = 0; j < wt[i]; j++){
            fullVec.push_back(vec[i]);
        }
    }

    // print_vec(fullVec, count);
    sort( fullVec.begin(), fullVec.end() );
    // print_vec(fullVec, n); 
    

    if ( n % 2 != 0 ){ // odd number of data, split around median
        for (unsigned int i = 0; i < n/2; i++){
            subVec1.push_back(fullVec[i]);
        }
        for (unsigned int k = n/2 + 1; k < n; k++){
            // tempIdx = k - n/2 - 1;
            subVec2.push_back(fullVec[k]);
        }
    }
    else{
        for (unsigned int i = 0; i < n/2; i++){    
            subVec1.push_back(fullVec[i]);
        }
        for (unsigned int k = n/2; k < n; k++){
            // tempIdx = k - n/2;
            subVec2.push_back(fullVec[k]);
        } 
    }

    quart1 = get_median(subVec1, n/2);
    quart3 = get_median(subVec2, n/2);

    // interquartile difference
    cout << fixed << setprecision(1) << quart3 - quart1 << endl;

    return 0;
}
