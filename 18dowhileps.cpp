#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 0;
    double totalPrice;
    
    //your code goes here
    do {
        cin >> totalPrice;
        cout << totalPrice * 0.15 << endl;
        purchaseAmount++;
    } while (purchaseAmount < 3);
    
    
    return 0;
}