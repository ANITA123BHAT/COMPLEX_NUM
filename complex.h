#ifndef COMPLEX_H
#define COMPLEX_H
/*class*/
class Complex {
private:
/*private data memebr of the class */
    int real;
    int imaginary;

public:
/* declaration of member function of the class */
    Complex();//defult construtor.
    Complex(int r, int i);//paramiterized constructor to initialize data member.
    Complex multiplyComplexNumber(Complex num);
    void get_result();
};

#endif  // COMPLEX_H
