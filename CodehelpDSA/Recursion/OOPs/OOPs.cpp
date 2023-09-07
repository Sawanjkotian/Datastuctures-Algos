#include<iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {

    protected:
        string Name;
        string Company;
        int Age;

    public:
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }

    void IntroduceYourself(){
        std::cout <<"Name - "<<Name<<std::endl;
        std::cout <<"Company - "<<Company<<std::endl;
        std::cout <<"Age - "<<Age<<std::endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if (Age>30)
        {
            std::cout<<Name<<"Got Promoted"<<std::endl;
        }
        else{
            std::cout<<Name<<"Not Promoted"<<std::endl;
        }
    }

};

class Developer: Employee{
    public:
        string FavProgLang;
        Developer(string name, string company, int age, string favProgLang)
            :Employee(name,company,age)
        {
            FavProgLang = favProgLang;
        }
        void FixBug(){
            std::cout<<getName()<<" fixed bug using " <<FavProgLang<<std::endl;
        }
};

class Teacher:public Employee{
    public:
    string Subject;
    void PreparedLesson(){
        std::cout<<Name<<" is preparing "<<Subject << " Lesson "<<std::endl;
    }
    Teacher(string name, string company, int age, string subject):Employee(name, company,age)
    {
        Subject = subject;
    }
};

int main()
{
    
    Developer d = Developer("Sawan","Google", 21, "C++");
    Teacher t = Teacher("Arjun", "Cool School", 35, "History");
    t.PreparedLesson();

}