#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long n;
    long dividend, remaind;
    long countOnes, maxOnes;
    cin >> n;

    countOnes = 0;
    maxOnes = countOnes;
    while ( n > 0 ){
        dividend = n / 2;
        remaind = n % 2;

        n = dividend;
        if ( remaind == 1 ){
            countOnes += 1;
            // cout << countOnes << " " << maxOnes << endl;    
        }
        else {
            if ( countOnes > maxOnes )
                maxOnes = countOnes;
            countOnes = 0;
        }
    }

    if ( countOnes > maxOnes )
        maxOnes = countOnes; 

    cout << maxOnes << endl;

    return 0;
}
