#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){

    long long N, temp, wtMean, wtSum;
    double mean;
    vector<long long> data;
    vector<long long> wt;

    // Statistics
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        data.push_back(temp);
    }

    for (int i = 0; i < N; i++){
        cin >> temp;
        wt.push_back(temp);
    }

    // Mean 
    wtMean = 0;
    for (int i = 0; i < N; i++){
        wtMean += wt[i]*data[i]; 
        wtSum += wt[i];    
    }
    mean = static_cast<double>(wtMean)/wtSum;
    printf("%0.1lf\n",mean);


 return 0;
}