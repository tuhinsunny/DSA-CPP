#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    //properties or data members
    // private :
    // int health;
    // char level;
    // char ch;
    public :
    static int timeToComplete;
    // char *name;
    //whenever we create our own constructor the default constructor does not get called
    // Hero(){
    //     cout<<"Default Constructor Called"<<endl;
    //     //name = new char[100];
    // }

    // //parameterized constructor
    // Hero(int health, char level){
    //     cout<<"this -->"<<this<<endl;//0x61fef4 thus it stores the address of the current calling object Ramesh
    //     this->health=health;
    //     this->level =level;
    // }
    // //copy constructor. After we manually create the copy constructor, the default copy constructor will not get implemented ad will be ignored or removed
    // Hero(Hero& temp){

    //     char *ch = new char[strlen(temp.name)+1];
    //     strcpy(ch, temp.name);
    //     this->name = ch;

    //     cout<<"Copy constructor called"<<endl;
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }
    // void print(){
    //     cout<<"[ Name : "<<name<<" , ";//Tuhin is a good boy
    //     cout<<"Health : "<<health<<" , ";//100
    //     cout<<"Level : "<<level<<" ]";//D
    //     cout<<endl;
    // }
    // public :
    // //getter
    // int getHealth(){
    //     return health;
    // }
    // char getLevel(){
    //     return level;
    // }

    // //setter
    // void setHealth(int h){
    //     health=h;
    // }
    // void setLevel(char l){
    //     level =l;
    // }
    // void setName(char name[]){
    //     strcpy(this->name,name);
    // }
    // ~Hero() {
    //     cout<<"Destructor bhai called "<<endl;
    // }
    static int random(){
        return timeToComplete; //can access only this variable because it is static
    }
    
};

int Hero::timeToComplete = 5;

int main(){

    cout<<Hero::timeToComplete<<endl;//5
    cout<<Hero::random()<<endl;
    // Hero h1;
    // Hero *h2=new Hero();
    // delete h2;//Calling destructor manually for dynamic allocation case

    // Hero hero1;
    
    // hero1.setHealth(100);
    // hero1.setLevel('D');
    // char name[100]="Tuhin is a good boy";
    // hero1.setName(name);

    // //hero1.print();//[ Name : Tuhin is a good boy , Health : 100 , Level : D ]
    
    // //use default copy constructor
    // Hero hero2(hero1); // or Hero hero2 = hero1;
    // //hero2.print();//[ Name : Tuhin is a good boy , Health : 100 , Level : D ]

    // hero1.name[0]='S';
    // hero1.print();//[ Name : Suhin is a good boy , Health : 100 , Level : D ]
    // //default constructor does shallow copy
    // hero2.print();//[ Name : Suhin is a good boy , Health : 100 , Level : D ]

    // hero1 = hero2;//copying using assgigment operator
    // hero1.print();//[ Name : Tuhin is a good boy , Health : 100 , Level : D ]
    // hero2.print();//[ Name : Tuhin is a good boy , Health : 100 , Level : D ]

    // Hero s(70,'C');
    // s.print();
    // Hero r(s);//copy constructor
    // r.print();


    // //cout<<"Hi"<<endl;
    // Hero Ramesh(10);
    // cout<<"Address of Ramesh : "<<&Ramesh<<endl;//0x61fef4
    // cout<<"Health : "<<Ramesh.getHealth()<<endl;//10
    // //cout<<"Hello"<<endl;

    // //We have to pass the parameters at the time of objext creation

    // Hero *h=new Hero(11);// Output : this -->0x6a1848
    /*
    //static allocation
    Hero tuhin;
    tuhin.setLevel('S');
    tuhin.setHealth(5);
    cout<<"Level is "<<tuhin.getLevel()<<endl;
    cout<<"Health is "<<tuhin.getHealth()<<endl;

    //dynamic allocation
    Hero *ob = new Hero;
    ob->setLevel('T');
    ob->setHealth(54);
    cout<<"Level is "<<(*ob).getLevel()<<endl;
    cout<<"Health is "<<(*ob).getHealth()<<endl;

    cout<<"Level is "<<ob->getLevel()<<endl;
    cout<<"Health is "<<ob->getHealth()<<endl;
    */
    return 0;
}