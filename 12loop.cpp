#include <iostream>
using namespace std;

int main()
{
    // //change the code
    // int num = 3;
    // while(num<=20){
    //     cout<<num<<endl;
    //     num+=3;
    // }
    int num = 1;
    while (num <= 20){
        if (num % 3 == 0){
            cout << num << endl;
        }
        num += 1;
    }

    return 0;
}