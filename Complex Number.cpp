#include<iostream>

using namespace std;

class Complex{
	private:
		double real;
		double imaginary;
	public:
		//defauly constructor
		Complex(){
			real = 0;
			imaginary = 0;
		}
		
		// parameterized constructor
		Complex(double r, double i){
			real = r;
			imaginary = i;
		}
		
		//copy Constructor
//		Complex(Complex &C){
//			real = C.real;
//			imaginary = C.imaginary;
//		}
		
		void print(){
			if(imaginary<0){
				cout<<real<<imaginary<<"i"<<endl;
			}else{
				cout<<real<<" +"<<imaginary<<"i"<<endl;
			}
		}
		
		//operator Overloading +
		Complex operator+ (Complex C){
			Complex A(0,0);
			A.real = real + C.real;
			A.imaginary = imaginary + C.imaginary;
			return A;
		}
		
		//operator overloading -
		Complex operator- (Complex C){
			Complex A(0,0);
			A.real = real - C.real;
			A.imaginary = imaginary - C.imaginary;
			return A; 
		}
		
		//operator overloading *
		Complex operator* (Complex C){
			Complex A(0,0);
			A.real = (real * C.real) - (imaginary * C.imaginary);
			A.imaginary = (real *  C.imaginary) + (imaginary * C.real);
			return A;
		}
		
		Complex operator/ (Complex C){
			Complex A(0,0);
			A.real = ((real*C.real) + (imaginary*C.imaginary))/(C.real*C.real + C.imaginary*C.imaginary);
			A.imaginary = ((imaginary*C.real - real*C.imaginary))/(C.real*C.real + C.imaginary*C.imaginary);
			return A;
		}
		
			
		
};

int main(){
	int real,img;
	
	cout<<"-------- Welcome to Complex Number ---------"<<endl;
	cout<<"1st Complex number: "<<endl;
	cout<<"Real: ";
	cin>>real;
	cout<<"Imaginary: ";
	cin>>img;
	Complex C(real,img);
	
	cout<<endl<<"2nd Complex number: "<<endl;
	cout<<"Real: ";
	cin>>real;
	cout<<"Imaginary: ";
	cin>>img;
	Complex B(real,img);
	
	Complex A = B * C;
	A.print();
	return 0;
}
