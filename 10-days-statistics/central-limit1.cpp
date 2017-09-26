#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double maxWt, numBoxes, meanWt, stdWt;
    
    cin >> maxWt;
    cin >> numBoxes;
    cin >> meanWt;
    cin >> stdWt;

    // Sample mean and standard deviation
    double sampleMean = numBoxes * meanWt;
    double sampleStd = sqrt(numBoxes) * stdWt;

    double less_maxWt = 0.5*(1 + erf( (maxWt - sampleMean)/(sqrt(2)*sampleStd) ));
    cout << fixed << setprecision(4) << less_maxWt << endl;
    
    return 0;
}
