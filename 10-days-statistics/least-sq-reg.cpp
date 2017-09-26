#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 5; 
    int tempMath, tempStat;
    double b, a; // coefficients for linear regression
    double xiyiSum = 0;
    double xisqrdSum = 0;
    double xiSum = 0;
    double yiSum = 0;
    double xHat = 80;
    double yHat;
    vector<double> xi;
    vector<double> yi;

    for ( int i = 0; i < n; i++ ){
        cin >> tempMath >> tempStat;
        xi.push_back(tempMath);
        yi.push_back(tempStat);
    }

    // computation of b
    for ( int i = 0; i < n; i++ ){
        xiyiSum += xi[i]*yi[i];
        xiSum += xi[i];
        yiSum += yi[i];
        xisqrdSum += pow(xi[i],2);
    }
    double bNum = n*xiyiSum - xiSum*yiSum;
    double bDen = n*xisqrdSum - pow(xiSum,2);
    b = bNum / bDen;

    // computation of a 
    a = yiSum/n - b*(xiSum/n);

    yHat = a + b*xHat;
    cout << fixed << setprecision(3) << yHat << endl;

    return 0;
}
