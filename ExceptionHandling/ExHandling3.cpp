#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
int a=10;
string s;
try{
    if( typeid(s).name()!= typeid(a).name())
        throw "Incompatible data assignment\n";
    s=a;

}
catch(int e){
   cout<<e<<endl;
}
catch(const char *e){
     cout<<e<<endl;
}
catch(runtime_error e){
     cout<<e.what()<<"\n";
}
catch(...){
   cout<<"Default exception ";
}

}
