#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int tempVal;
    double mean, std;
    vector<int> vec;
    
    cin >> n;
    for (unsigned int i = 0; i < n; i++){
        cin >> tempVal;
        vec.push_back(tempVal);
    }

    // Mean 
    mean = 0;
    for (int i = 0; i < n; i++)
        mean += vec[i]; 
    mean = mean/n;

    // Standard deviation
    for (int i = 0; i < n; i++)
        std += pow((vec[i] - mean),2); 
    std = sqrt( std/n );

    // Formatted printing
    cout << fixed << setprecision(1) << std << endl;

    return 0;
}


