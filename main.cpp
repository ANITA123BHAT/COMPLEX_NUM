#include <iostream>
#include "complex.h"
using namespace std;

int main() {
    int complex_num[4];
    //taking the use input two perform multiplication of complex number 
    cout << "Enter the values of a, b, c, d: ";
    for (int i = 0; i < 4; i++) {
        cin >> complex_num[i];
    }
/* calling constructor to initialize data member*/
    Complex num1(complex_num[0], complex_num[1]);//object of class Complex // 16, -30
    Complex num2(complex_num[2], complex_num[3]);//object of class Complex //5 -3
/*function to complex number multiplication operation.*/
    Complex result = num1.multiplyComplexNumber(num2);//passing num2 object as  an argument by taking multipleComplex() as member of object num1.
//to display result call get_result()
    result.get_result();
    return 0;
}
