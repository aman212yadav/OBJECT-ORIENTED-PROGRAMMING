
#include<bits/stdc++.h>
using namespace std;
class car{
    public:                // Access Modifier
     // member variables
   int price;
   int model_no;
   char name[20];
    // member function
   void start(){
   cout<<"grr... starting the car "<<name<<endl;
   }
};
int main(){
 car c;
 c.price=500;              // Accessing Member variable using dot (.) operator
 c.model_no=171210007;
 c.name[0]='B';
 c.name[1]='M';
 c.name[2]='W';
 c.name[3]='\0';
 c.start();

}
