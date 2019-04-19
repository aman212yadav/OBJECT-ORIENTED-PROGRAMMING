#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
int a=10,b=0;
try{

   if(b==0){
       throw runtime_error("Divide By Zero");
   }
   cout<<a/b<<endl;

}
catch(runtime_error &e){
  cout<<e.what()<<endl;
}


}
