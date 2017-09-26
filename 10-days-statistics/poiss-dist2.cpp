#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double meanA, meanB;
    double expCostA, expCostB;

    cin >> meanA >> meanB;

    // expected cost of operating machine A
    expCostA = 160 + 40 * (meanA + pow(meanA,2));

    // expected cost of operating machine B
    expCostB = 128 + 40 * (meanB + pow(meanB,2));

    cout << expCostA << '\n' << expCostB << endl;
       
    return 0;
}

