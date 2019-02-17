// conversion from one class type to another


#include<bits/stdc++.h>
using namespace std;
class item{
  int a,b;
  public:
        void showData() { cout<<a<<" "<<b<<endl; }
        void setData(int x,int y){ a=x; b=y;}
        int getA(){ return a;}
        int getB(){ return b;}
};

class product{
int m,n;
public:
    product(){}
    product(item i){
    m=i.getA();
    n=i.getB();
    }
    void showData() { cout<<m<<" "<<n<<endl; }
    void setData(int x,int y){ m=x; n=y;}
    int getM(){ return m;}
    int getN(){ return n;}
};

int main(){

item I;
product P;
I.setData(3,4);
P=I;
P.showData();



}

