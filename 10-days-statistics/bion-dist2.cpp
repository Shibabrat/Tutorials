/*

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int factorial ( int n ){

    if ( n > 1 )
        return n*factorial(n-1);
    else
        return 1;

}

// Performs testing of factorial function
void test_factorial(){

    int n1 = 1;
    int n2 = 4;
    int n3 = 10;

    cout << n1 << "! is " << factorial( n1 ) << endl;      
    cout << n2 << "! is " << factorial( n2 ) << endl;      
    cout << n3 << "! is " << factorial( n3 ) << endl;      

}

double bion_coeff(const int numTrials, int numSucc, const double probS){

    double nCx;
    double probF = 1.0 - probS;

    nCx = factorial(numTrials)/(factorial(numSucc)*factorial(numTrials - numSucc));
    nCx = nCx*pow(probS, numSucc)*pow(probF, numTrials - numSucc);

    return nCx;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double r1, r2;
    double probS, probF; // probability of success and failure.
    int x, numSucc, numTrials;
    double sumProb;

    cin >> r1 >> r2;

    // testing the factorial function
    // test_factorial();        

    // Computes atleast probability using binomial distribution
    numTrials = r2;
    numSucc = 2;    
    probS = r1/100.0;

    x = numSucc; 
    sumProb = 0;
    while ( x >= 0 ){
        sumProb += bion_coeff(numTrials, x, probS);
        x -= 1;
    }
    cout << fixed << setprecision(3) << sumProb << endl;
    
    x = numSucc;
    sumProb = 0;
    while ( x <= numTrials ){
        sumProb += bion_coeff(numTrials, x, probS);
        x += 1;
    }
    cout << fixed << setprecision(3) << sumProb << endl;

    return 0;
}




