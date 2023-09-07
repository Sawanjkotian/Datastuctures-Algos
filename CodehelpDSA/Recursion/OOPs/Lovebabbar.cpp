#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    
    int health;

    public:
    char level;
    char *name;

    Hero(){
        cout<< "Simple constructor called" << endl;
        name = new char[100];
    }
    //Parameterized constructor
    //This points the the current object
    Hero(int health){
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    //Copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this-> name = ch;
        cout<<"Copy contructor is called" << endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print(){
        cout << endl;
        cout << "[";
        cout << "Name: " << this->name << ",";
        cout<<" health: " << this->health <<",";
        cout<<" level: " << this->level << "]";
        cout << endl;
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }

    void setLevel(char ch){
        level = ch;
    }

    int setHealth(int h)
    {
        health = h;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    //Destructor    
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    //Static
    Hero a;
    
    //Dynamic

    Hero *b = new Hero();

    //Manually called
    delete b;

    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');

    // char name[7] = "Sawan";

    // hero1.setName(name);

    // //hero1.print();

    // Hero hero2(hero1);

    // //hero2.print();

    // hero1.name[0]='R';

    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();

    // hero2.print();


 

    // Hero S(100, '9');
    // S.print();

    // Hero R(S);
    // R.print();




    // //Static allocation
    // Hero a;

    // a.setHealth(10);

    // cout <<"The health of A is "<< a.getHealth() << endl;
    // //dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(100);

    // cout <<"The health of B is "<< b->getHealth() << endl;



    // /*
    // Hero ramesh;
    // ramesh.setHealth(70);
    // cout<<"Health is: "<< ramesh.getHealth() << endl;
    // cout<<"Level is: "<< ramesh.level << endl;
    // */
} 