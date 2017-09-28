#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int int1;
    double d1;
    string str1;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> int1;
    cin >> d1;
    getline(cin >> ws, str1);

    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + int1); 

    // Print the sum of the double variables on a new line.
    printf("%0.1f\n", d + d1); 
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + str1 << endl;

    return 0;

}


