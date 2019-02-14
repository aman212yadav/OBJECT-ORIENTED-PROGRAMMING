#include<bits/stdc++.h>
using namespace std;
class car{
   int price;
   int model_no;
   char name[20];
};
int main(){
 car c;
 cout<<sizeof(c)<<"\n";   // output 28 tells that object c is occupying 28 bytes of spacein memeory;
 cout<<sizeof(car)<<"\n"; // output 28 tell that object of car class will occupy 28 bytes of space in memory.
}
