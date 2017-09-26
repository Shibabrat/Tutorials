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
    double grade1, pass;

    cin >> mean >> std;
    cin >> grade1;
    cin >> pass;

    // probability of students who score more than grade1
    double gr_grade1 = 1 - 0.5*(1 + erf( (grade1-mean)/(sqrt(2)*std) ));

    // probability of students who score more than pass
    double gr_pass =  1 - 0.5*(1 + erf( (pass - mean)/(sqrt(2)*std) )); 

    cout << fixed << setprecision(2) << gr_grade1*100 << endl;
    cout << gr_pass*100 << endl;
    cout << (1 - gr_pass)*100 << endl;

    return 0;
}
