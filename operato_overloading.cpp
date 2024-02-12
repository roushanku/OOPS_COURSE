// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;

class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator+(Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << '\n'; }
};

// concating two str using operator overloading
class String{
    public:
        string str;
        String operator + (const String& Obj0) {
            String obj;
            obj.str = this->str + " " +Obj0.str;
            return obj;
        }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();

    String Fname;
    Fname.str = "roush";

    String lname;
    lname.str = "kumar";

    String fullname = Fname + lname;

    cout<<fullname.str<<"\n";
}
