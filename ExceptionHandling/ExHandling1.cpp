#include<iostream>
#include<exception>
using namespace std;
int main(){
int a=5,b=0;
try{
     if(b==0)
        throw "Divide By Zero\n";
cout<<a/b<<endl;
}
catch(const char *e){
   cout<<e;
}


}
