#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long T;
    string name, searchName;
    unsigned long phoneNo;
    map<string, unsigned long> phoneBook;
    map<string, unsigned long>::iterator idx;

    cin >> T;
    for ( unsigned long i = 0; i < T; i++ ){
        cin >> name >> phoneNo;
        phoneBook[name] = phoneNo;
    }

    bool done = false;
    while ( !done ){
        if ( cin >> searchName) {
            idx = phoneBook.find(searchName);
            if ( idx != phoneBook.end() )
                cout << idx->first << "=" << idx->second << endl;
            else 
                puts("Not found");
        }
        else
            done = true;
    }

    return 0;
}
