// conversion of primitive datatype to class type



#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int a,b;
public:
    Complex(){}
    Complex(int x){ a=x;b=0;}
    void setData(int x,int y)
    {  a=x;
       b=y;
    }
    void showData(){
    cout<<a<<" + j"<<b<<endl;
    }

};
int main(){
Complex  c1;
int x=5;
c1=x;
c1.showData();
}
