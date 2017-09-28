#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num, den;
    int numTrials;
    double geomProb, probS;

    cin >> num >> den;
    cin >> numTrials;

    probS = static_cast<double> (num)/den;
    geomProb = pow(1-probS,numTrials - 1)*probS;

    cout << fixed << setprecision(3) << geomProb << endl;

    return 0;
}
