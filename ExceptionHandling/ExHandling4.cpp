#include<iostream>
using namespace std;
void test() {
 throw ;

}
int main(){
try{
   test();
}
catch(int e){
cout<<e<<endl;
}
catch(const char *e){
cout<<e<<endl;
}
catch(runtime_error e){
cout<<e.what()<<endl;
}
catch(...){
cout<<"Default catch";
}

}
