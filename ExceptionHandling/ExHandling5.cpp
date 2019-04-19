#include<iostream>
#include<exception>
using namespace std;
class Exception : public exception{
    public:
  const char* what(){
       return "what block is executed";
  }
};

int main(){

   try{
     throw Exception();
   }
   catch(Exception &e){
      cout<<e.what()<<endl;
   }

}
