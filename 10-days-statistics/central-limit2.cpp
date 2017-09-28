#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tcktsLeft, numStds;
    double meanTckts, stdTckts;
    
    cin >> tcktsLeft;
    cin >> numStds;
    cin >> meanTckts;
    cin >> stdTckts;

    // Sample mean and standard deviation
    double sampleMean = numStds * meanTckts;
    double sampleStd = sqrt(numStds) * stdTckts;

    double less_tcktsLeft = 0.5*(1 + erf( (tcktsLeft - sampleMean)/(sqrt(2)*sampleStd) ));
    cout << fixed << setprecision(4) << less_tcktsLeft << endl;
    
    return 0;
}
