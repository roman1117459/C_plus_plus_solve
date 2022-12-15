
/* Find distance between 2 dot coordinate*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// double printCoordinate(int x1, int y1, int x2, int y2) {

//     return sqrt(pow(x2-x1, 2)+ pow((y2-y1), 2));
    
// }
// int main(){

//     cout << printCoordinate(1,2,3,4);
//     return 0;
// }
int main() {

    double x1=1, y1=2 , x2=3 , y2=4;

    cout << sqrt(pow(x2-x1, 2)+ pow((y2-y1), 2)) <<endl;

    return 0;

}

