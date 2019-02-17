// type conversion from class type to primitive type


#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int a,b;
public:
    Complex(){}
   operator int ( ){
    return a;
   }
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
c1.setData(3,4);
c1.showData();
int x;
x=c1;
cout<<x;
}
