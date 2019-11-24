
/* Write class definition for Complex */

class Complex
{
   friend std::ostream &operator<<(std::ostream &,const Complex &);
   friend std::istream &operator>>(std::istream &, Complex &);
    public:
    Complex(double=0,double=0);
    Complex operator+( const Complex &);
    Complex operator-(const Complex &);
    Complex operator*( const Complex &);
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &right)const
       {
           return !(*this==right);
       }
    void printComplex();
    void setComplexNumber(double,double);
    private :
        double realPart;
        double imaginaryPart;
};
