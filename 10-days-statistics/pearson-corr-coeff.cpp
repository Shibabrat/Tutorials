#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double get_mean( vector<double> vecIn ){
    
    double mean = 0;
    int N = vecIn.size();
    for (int i = 0; i < N; i++)
        mean += vecIn[i]; 
    mean = mean/N;

    return mean;
}

double get_std( vector<double> vecIn ){

    double std;
    double mean = get_mean(vecIn);
    int N = vecIn.size();
    for (int i = 0; i < N; i++)
        std += pow((vecIn[i] - mean),2); 
    
    std = sqrt( std/N );

    return std;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<double> xi;
    vector<double> yi;
    double rhoXY, tempVal, meanX, meanY, stdX, stdY;

    cin >> n;
    for ( int i = 0; i < n; i++ ){
        cin >> tempVal;
        xi.push_back(tempVal);
    }

    for ( int i = 0; i < n; i++ ){
        cin >> tempVal;
        yi.push_back(tempVal);
    }
    
    meanX = get_mean(xi);
    meanY = get_mean(yi);
    stdX = get_std(xi);
    stdY = get_std(yi);

    // cout << fixed << setprecision(3) << meanX << endl;
    // cout << fixed << setprecision(3) << meanY << endl;
    // cout << fixed << setprecision(6) << stdX << endl;
    // cout << fixed << setprecision(6) << stdY << endl;
    
    rhoXY = 0;
    for (int i = 0; i < n; i++ )
        rhoXY += ((xi[i] - meanX)*(yi[i] - meanY));
    rhoXY = rhoXY / (n * stdX * stdY);

    cout << fixed << setprecision(3) << rhoXY << endl;

    return 0;
}
