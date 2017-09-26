#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int T;
    string strTestcase, strEvenIdx, strOddIdx;

    cin >> T; // number of test cases
    for ( unsigned int i = 0; i < T; i++ ){
        cin >> strTestcase;
        size_t strLen = strTestcase.size();
        for ( size_t j = 0; j < strLen; j++ ){
            if ( j % 2 == 0 )
                strEvenIdx.push_back(strTestcase[j]);
            else 
                strOddIdx.push_back(strTestcase[j]);
        }
        cout << strEvenIdx << " " << strOddIdx << endl; 

        strEvenIdx.clear();
        strOddIdx.clear();
    }

    return 0;
}


