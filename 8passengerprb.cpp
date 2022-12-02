#include <iostream>
using namespace std;

int main() {
    //your code goes here
    int x = 50;
    int y;

    cin >> y;

    int seat;
    seat = 50 - (y % x);

    cout << seat;
    
    return 0;

}