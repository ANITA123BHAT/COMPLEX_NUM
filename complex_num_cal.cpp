
#include <iostream>
#include "complex.h"
using namespace std;
Complex::Complex(){}//defult constructor
Complex::Complex(int r, int i) {
    real = r;
    imaginary = i;
}

/* function defining out side the class in a seprate file */
Complex result;
Complex Complex::multiplyComplexNumber(Complex num) {
    result.real = (real * num.real) - (imaginary * num.imaginary);//((complex_num[0]*complex_num[2])-complex_num[1]*complex_num[3]))
    result.imaginary = (imaginary * num.real) + (real * num.imaginary);//((complex_num[0]*complex_num[3])+complex_num[1]*complex_num[2]))
    return result;
}
void Complex::get_result() {
    if(imaginary>0){
        cout << "Result= " << real << " + j" << imaginary << endl;
    }
    else if(imaginary<0){
        cout << "Result= " << real  << imaginary <<"j"<<endl;//-10-198j
    }
    else{
        cout<<real<<endl;
    }
}
