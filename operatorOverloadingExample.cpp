#include<bits/stdc++.h>
using namespace std;
class Complex{
int x,y;
  public:

      Complex(){}
      Complex(int xx,int yy){x=xx; y=yy; }
      void setData(int xx,int yy){
      x=xx;
      y=yy;
      }
      friend istream & operator>>(istream & , Complex &);
      friend ostream & operator<<(ostream &,Complex &);
      friend Complex operator+(Complex ,Complex );
      friend Complex operator-(Complex ,Complex );
      friend Complex operator*(Complex ,Complex );
};
istream & operator>>( istream &in,Complex &c){
   int xx,yy;
   cout<<"enter real Part : ";
   in>>c.x;
   cout<<"enter imaginary Part : ";
   in>>c.y;

   return in;
}
ostream & operator<<(ostream &out,Complex &c){
   out<<c.x<<" + "<<c.y<<"j\n";
   return out;
}
Complex operator + (Complex c1,Complex c2){
   Complex c3(c1.x+c2.x,c1.y+c2.y);
   return c3;
}
Complex operator - (Complex c1,Complex c2){
   Complex c3(c1.x-c2.x,c1.y-c2.y);
   return c3;
}
Complex operator * (Complex c1,Complex c2){
   Complex c3;

   c3.x= (c1.x)*(c2.x)-(c1.y)*(c2.y);
   c3.y=c1.y*c2.x+c1.x*c2.y;
   return c3;
}
int main(){
Complex c1,c2,c3;
cin>>c1;
cout<<c1;
cin>>c2;
cout<<c2;
cout<<"Additon of two complex Number \n";
c3= c1+c2;
cout<<c3;
cout<<"Subtration of two complex Number \n";
c3=c1-c2;
cout<<c3;
cout<<"Multiplication of two complex Number \n";
c3=c1*c2;
cout<<c3;
}
