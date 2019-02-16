// we know shallow copy does'nt work when any of data memeber is pointer so to avoid this we need to do deep copy.
// below code illustrates one example on deep copy

#include<bits/stdc++.h>
using namespace std;
class car{
private:                // Access Modifier
    // member variable
     int price;
     int modelNo;
     char *name;
public:
 
    //Default constructor
      car(){name=NULL;};
    //Parameterised constructor
     car(int price,int modelNo,string in){
         this->price=price;
         this->modelNo=modelNo;
         name=new char[in.size()+1];
         strcpy(name,in.c_str());
     }
     //
     // deep Copy constructor(beacuse of pointer)
     car(car &x){
         cout<<"hello from deep copy constructor\n";
        price= x.price;
        modelNo=x.modelNo;
        name=new char[strlen(x.name)];
        strcpy(name,x.name);
     }
    // Member function
    void start()
    {
        cout<<"grr... starting the car "<<name<<endl;
    }
    // setters
    // Using this pointer to distinguish local and memeber variable that are having same name
    void setPrice(int price)
    {
        // Assuming price of car should be always be greater than equal 1000
        if(price> 1000)
            this->price=price;
        else
            this->price=1000;
    }
    void setModelNo(int modelNo)
    {
        this->modelNo=modelNo;
    }
    void setName(string s)
    {  name=new char[s.size()+1];
        strcpy(name,s.c_str());
    }
    // getters
    char * getName()
    {
        return name;
    }
    int getPrice()
    {
        return price;
    }
    int getModelNo()
    {
        return modelNo;
    }
    void print(){
        cout<<getPrice()<<" "<<getModelNo()<<" "<<getName()<<"\n";
        
    }
};
int main(){
 car c;
 c.setName("BMW");
 c.setPrice(500);
 c.setModelNo(171210007);
 car d(1000,171210007,"audi");
 d.print();
 car e(d);
 e.print();
 d.print();
 

}
