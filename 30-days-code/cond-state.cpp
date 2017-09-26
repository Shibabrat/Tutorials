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


int main(){
    int N;
    cin >> N;

    if ( N % 2 != 0 )
        puts("Weird");
    else if ( N % 2 == 0 && N >= 2 && N <= 5 ) 
        puts("Not Weird");
    else if ( N % 2 == 0 && N >= 6 && N <= 20 )
        puts("Weird");
    else if ( N % 2 == 0 && N > 20 )
        puts("Not Weird");

    return 0;
}