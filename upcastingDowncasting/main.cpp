//
//  main.cpp
//  upcastingDowncasting
//
//  Created by Kaan Şengün on 17.11.2023.
//

#include <iostream>
#include "upcastingDowncasting.h"
using namespace std;

/*    EMPLOYEE           MANAGER
      name               name
      surname            surname
      salary             salary
      display            display
                         department
                         increaseSalary
 
 
 */

int main(int argc, const char * argv[]) 
{
    /*
    Employee *emp1,*emp2;
    Manager mng("Ogun","Birinci",3500,"Software");
    Employee emp3("Duygu","Keydal",4000);
    
    emp1=&mng;  //Upcasting işleminde yalnızca base classtaki üyelere erişilir(Her yönetici bir çalışan olduğundan problemle karşılaşılmaz)
    emp2=&emp3;
    emp1->displayInformation();
    emp2->displayInformation();
    mng.displayInformation();
    
    
    
          DOWNCASTİNG
    cout<<"----------------------------------------"<<endl;
    Employee emp("Duygu","Keydal",3900);
    Employee *emp2=&emp;
    
    Manager *mng2=(Manager*)(emp1);//Downcasting (her çalışan yönetici olamayacağı için problemlerle karşılaşılabilir)
    Manager *mng3=(Manager*)(emp2);
    
    cout<<mng3->mngDepartment<<endl;
    
    
    
    cout<<"-------------------------------------------"<<endl;
    emp1->displayInformation();
    mng2->displayInformation();
    
    
    Employee emp1("Ogun","Birinci",3500);
    Manager mng1("Kaan","Sengun",3500,"Software");
    cout<<"Referance Parameter:"<<endl;
    print(emp1);
    print(mng1);
    
    cout<<"\n-------------------------------\nPOINTER"<<endl;
    Employee *emp2=new Employee("Ogun","Birinci",3500);
    Manager *mng2=new Manager("Kaan","Sengun",3500,"Software");
    print2(emp2);
    print2(mng2);
    
    cout<<"\n-------------------------------\nValue Parameter"<<endl;
    print3(emp1);
    print3(mng1);
     
     VIRTUAL DESTRUCTOR
    Manager *mng=new Manager("Ogun","Birinci",3500,"Software");
    Employee *emp=mng;
    Employee *emp2=new Manager("Ogun","Birinci",3500,"Software");
    
    delete emp2;
    delete emp;
     */
    Cat *catAnimal=new Cat();
    Dog *dogAnimal=new Dog();
    Duck *duckAnimal=new Duck();
    
    Animal *animalObject[]={catAnimal,dogAnimal,duckAnimal};
    
    for(int i=0;i<3;i++){
        animalObject[i]->talk();
    }
    
    
    
return 0;
}
