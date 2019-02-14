#include<bits/stdc++.h>
using namespace std;
class car{
private:                // Access Modifier
    // member variable
    int price;
    int modelNo;
    char name[20];
public:
    // member function
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
    {
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
};
int main(){
 car c;
 c.setName("BMW");
 c.setPrice(500);
 c.setModelNo(171210007);
 cout<<c.getName()<<endl<<c.getPrice()<<endl<<c.getModelNo()<<endl;
 c.start();
 

}
