#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mean, std;
    double hrs1, hrs2, hrs3;

    cin >> mean >> std;
    cin >> hrs1;
    cin >> hrs2 >> hrs3;

    double less_hrs1 = 0.5*(1 + erf( (hrs1-mean)/(sqrt(2)*std) ));
    double bet_hrs2_hrs3 = 0.5*(1 + erf( (hrs3-mean)/(sqrt(2)*std) )) - \
        0.5*(1 + erf( (hrs2-mean)/(sqrt(2)*std) ));; 
    
    cout << fixed << setprecision(3) << less_hrs1 << endl;
    cout << bet_hrs2_hrs3 << endl;
    
    return 0;
}
