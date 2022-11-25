#include<iostream>
#include<string>

class Animal
{   
protected:
    std::string m_name = "";
    int m_id;
public:
    virtual void toFeed(){std::cout<<"The Animals Eats"<<std::endl;}   
    virtual void makeSound(){std::cout<<"The Animal sound"<<std::endl;}

};

class Dog:public Animal{
    
    // Քանի որ Animal-ի բոլոր ժառանգները ունեն ներքոնշյալ փոփոխականները
    // ճիշտ կլիներ նրանց հայտարարել Animal֊ում, որպես protected փոփոխականներ
private:
    std::string m_color;
    std::string m_breed;
public:
    virtual void toFeed() override{std::cout<<"The Dog are eating Meat"<<std::endl;}
    virtual void makeSound() override{std::cout<<"The Dog are make sound haf haf haf"<<std::endl;}
    void set_color(std::string color){
        this->m_color = color;
    }
    std::string get_color(){
        return m_color;
    }
    void set_name( std::string name){
        this->m_name = name;
    }

    std::string get_name(){
        return m_name;
    }
    void set_breed(std::string breed){
        this->m_breed = breed;
    }
    std::string get_breed(){
        return m_breed;
    }
    void set_id(int id){
        this->m_id = id;
    }
    int get_id(){
        return m_id;
    }
};

class Cat: public Dog{
private:
    std::string m_color;
    std::string m_breed;
public:
    virtual void toFeed() override{std::cout<<"The Cat are eating Milk"<<std::endl;}
    virtual void makeSound() override{std::cout<<"The Cat are make sound Myau Myau Myau"<<std::endl;}

};





int main(){

    Dog dog;
    dog.toFeed();
    dog.set_color("Black");
    dog.set_name("Aqiles");
    dog.set_breed("Rotfeler");
    dog.set_id(20213);
    std::cout<<dog.get_name()<<std::endl;
    std::cout<<dog.get_color()<<std::endl;
    std::cout<<dog.get_breed()<<std::endl;
    std::cout<<dog.get_id()<<std::endl;

    Cat cat;
    cat.toFeed();
    cat.set_color("Whithe");
    cat.set_name("Mursik");
    cat.set_breed("Vana");
    cat.set_id(21331);
    std::cout<<cat.get_name()<<std::endl;
    std::cout<<cat.get_color()<<std::endl;
    std::cout<<cat.get_breed()<<std::endl;
    std::cout<<cat.get_id()<<std::endl;

    return 0;
}
