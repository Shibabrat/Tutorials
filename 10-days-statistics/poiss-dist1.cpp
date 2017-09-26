#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int factorial ( int n ){
    if ( n < 2 ) return 1;
    
    return n*factorial(n-1); 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double poissMean;
    int numTrials;
    double poissProb;

    cin >> poissMean;
    cin >> numTrials;

    poissProb =  pow(poissMean,numTrials)*exp(-poissMean)/factorial(numTrials);
    cout << fixed << setprecision(3) << poissProb << endl;

    return 0;
}
