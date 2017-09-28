#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, tempRank;
    int di = 0;
    double rXY;
    vector<double> xi, sort_xi;
    vector<double> yi, sort_yi;
    vector<int> rankItrX;
    vector<int> rankItrY;
    vector<double>::iterator tempItr1, tempItr2;
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

    // Naive and simple implementation: WILL NOT SCALE 
    sort_xi = xi; //!!
    sort_yi = yi; //!!
    sort( sort_xi.begin(), sort_xi.end() );
    sort( sort_yi.begin(), sort_yi.end() );
    // finding rank of each element
    for ( int i = 0; i < n; i++ ){
        tempItr1 = find( sort_xi.begin(), sort_xi.end(), xi[i] );
        tempRank = distance ( sort_xi.begin(), tempItr1 ) + 1;
        rankItrX.push_back(tempRank);
        // cout << rankItrX[i] << endl;

        tempItr2 = find( sort_yi.begin(), sort_yi.end(), yi[i] );
        tempRank = distance ( sort_yi.begin(), tempItr2 ) + 1;
        rankItrY.push_back(tempRank);
        // cout << rankItrY[i] << endl;

        di += ((rankItrX[i] - rankItrY[i])*(rankItrX[i] - rankItrY[i]));
    }
    
    // cout << di << endl;
    rXY = 1 - 6*(di/(n*(n*n - 1.0)));
    cout << fixed << setprecision(3) << rXY << endl;

    return 0;
}
