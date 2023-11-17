//
//  upcastingDowncasting.h
//  upcastingDowncasting
//
//  Created by Kaan Şengün on 17.11.2023.
//
#include <iostream>
using namespace std;


class Employee{
public:
    string empName,empSurname;
    double empSalary;
    Employee(string name,string surname,double salary){
        empName=name;
        empSurname=surname;
        empSalary=salary;
    }
    virtual ~Employee(){
        cout<<"Employee destructor worked."<<endl;
    }
    virtual void displayInformation(){ //Sınıflara özgü davranış göstermesini virtual la yapıyoruz
        cout<<"Name:"<<empName<<endl;
        cout<<"Surname:"<<empSurname<<endl;
        cout<<"Salary:"<<empSalary<<endl;
    }
    
};
class Manager:public Employee{
public:
    string mngDepartment;
    Manager(string name,string surname,double salary, string department):Employee(name,surname,salary){
        mngDepartment=department;
    }
    ~Manager(){
        cout<<"Manager destructor worked."<<endl;
    }
    void displayInformation(){
        Employee::displayInformation();
        cout<<"Department:"<<mngDepartment<<endl;
    }
    void increaseSalary(){
        empSalary+=200;
    }
};
//Virtual Function reference ve pointerla kullanılmalı
//reference
void print(Employee &employeeType){
    employeeType.displayInformation();
}
//pointer
void print2(Employee *employeeType){
    employeeType->displayInformation();
}
//value
void print3(Employee employeeType){
    employeeType.displayInformation();
}

class Animal{
public:
    virtual void talk()=0;//Pure Virtual oluşturduk. Pure Virtua sahip sınıflardan nesne oluşturulamaz.
    
};
class Dog:public Animal{
public:
    void talk(){
        cout<<"Hav hav."<<endl;
    }
};
class Cat:public Animal{
public:
    void talk(){
        cout<<"Meov."<<endl;
    }
};
class Duck:public Animal{
public:
    void talk(){
        cout<<"Vak vak."<<endl;
    }
};
