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
using namespace std;

int hourglass_sum( vector< vector<int> > matrix, int rowIdx, int colIdx ){

    int sum = matrix[rowIdx][colIdx];

    // For the hourglass of 3x3 grid we have 7 elements to sum
    // generate those indices
    vector<int> hourglassIdx;

    for ( int j = colIdx-1; j <= colIdx+1; j++ ){
         int i = rowIdx - 1;
         sum += matrix[i][j];
    }

    for ( int j = colIdx-1; j <= colIdx+1; j++ ){
        int i = rowIdx + 1;
        sum += matrix[i][j];
    }

    return sum;
}


int main(){

    int maxHourglassSum = -64; // because -9 <= A[i][j] <= 9
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    for(int arr_i = 1;arr_i < 5;arr_i++){
        for(int arr_j = 1;arr_j < 5;arr_j++){
            int hourglassSum = hourglass_sum( arr, arr_i, arr_j );
            if ( hourglassSum > maxHourglassSum )
                maxHourglassSum = hourglassSum;
        }
    }

    cout << maxHourglassSum << endl;

    return 0;
}
