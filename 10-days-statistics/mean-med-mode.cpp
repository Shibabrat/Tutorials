#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){

    long long N, temp;
    vector<int> data;

    // Statistics
    double mean, median, mode;
    long midPos, countVal, maxFreq, modeVal;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        data.push_back(temp);
    }
        // data.push_back(temp);

    // Mean 
    mean = 0;
    for (int i = 0; i < N; i++)
        mean += data[i]; 
    mean = mean/N;
    cout << mean << endl;

    // Median
    sort( data.begin(), data.end() );
    if ( N % 2 == 0 ){
        midPos = N / 2 - 1;
        median = 0.5*( data[midPos] + data[midPos+1] );
    }
    else{
        midPos = N / 2;
        median = data[midPos];
    }
    cout << median << endl;
    
    // Mode
    countVal  = count( data.begin(), data.end(), data[0] );
    maxFreq = countVal;
    for ( int i = 1; i < N; i++ ){
        countVal  = count( data.begin(), data.end(), data[i] );
        if ( countVal > maxFreq ){
            maxFreq = countVal;
            modeVal = i;
        }
    }
    cout << data[modeVal] << endl;

    
    return 0;
}

