// type conversion from one class to another using casting operator


#include<bits/stdc++.h>
using namespace std;
class product{
int m,n;
public:
    void showData() { cout<<m<<" "<<n<<endl; }
    void setData(int x,int y){ m=x; n=y;}
    int getM(){ return m;}
    int getN(){ return n;}
};
class item{
  int a,b;
  public:
        item(){}
        operator product (){
            product temp;
            temp.setData(a,b);
            return temp;
        }
        void showData() { cout<<a<<" "<<b<<endl; }
        void setData(int x,int y){ a=x; b=y;}
        int getA(){ return a;}
        int getB(){ return b;}
};


int main(){

item I;
product P;
I.setData(3,4);
P=I;
P.showData();

}
