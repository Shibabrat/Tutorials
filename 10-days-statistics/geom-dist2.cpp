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
    int numTrials, x;
    double geomProb, probS;

    cin >> num >> den;
    cin >> numTrials;

    probS = static_cast<double> (num)/den;

    x = 1;
    geomProb = 0;
    while ( x <= numTrials ){
        geomProb += pow(1-probS,x - 1)*probS;
        x += 1;        
    }
    
    cout << fixed << setprecision(3) << geomProb << endl;

    return 0;
}
