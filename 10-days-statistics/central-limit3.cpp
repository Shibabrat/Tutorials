#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int sampleN, popMean, popStd;
    double perSampleMean, z;

    cin >> sampleN >> popMean >> popStd >> perSampleMean >> z;

    double L = popMean - z*(popStd/sqrt(sampleN));
    double U = popMean + z*(popStd/sqrt(sampleN));

    cout << L << '\n' << U << endl;
    return 0;
}
