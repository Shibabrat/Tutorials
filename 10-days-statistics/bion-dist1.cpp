/*
Computes The ratio of boys to girls for babies born in Russia is 1.09 : 1. 
If there is  child born per birth, what proportion of Russian families with 
exactly 6 children will have at least 3 boys?

Write a program to compute the answer using the above parameters. 
Then print your result, rounded to a scale of 3 decimal places (i.e., 1.234 format).
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
    double sumProb = 0;

    cin >> r1 >> r2;

    // testing the factorial function
    // test_factorial();        

    // Computes atleast probability using binomial distribution
    numTrials = 6;
    numSucc = 3;    
    x = numSucc;
    probS = r1/( r1 + r2 );

    while ( x <= numTrials ){
        sumProb += bion_coeff(numTrials, x, probS);
        x += 1;
    }


    cout << fixed << setprecision(3) << sumProb << endl;

    return 0;
}




