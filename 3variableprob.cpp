#include <iostream>
using namespace std;

int main() {
    int aquariumDavid = 8;
    int aquariumAlex = 11;

    // your code goes here
    int storeforswap;

    storeforswap = aquariumDavid;
    aquariumDavid = aquariumAlex;
    aquariumAlex = storeforswap; 
    
    cout << "David's aquarium: " << aquariumDavid << endl;
    cout << "Alex's aquarium: " << aquariumAlex;
    return 0;
}