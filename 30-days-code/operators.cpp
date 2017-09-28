#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost, tipPercent, taxPercent;
    double totalCost;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    totalCost = mealCost + (taxPercent/100)*mealCost \
        + (tipPercent/100)*mealCost;
    
    int temp = static_cast<int> (totalCost);
    if ( totalCost - temp > 0.5)
        totalCost = temp + 1;
    else
        totalCost = temp;

    cout << "The total meal cost is " 
        <<  (totalCost) << " dollars." << endl;


    return 0;

}