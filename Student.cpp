#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sID,char Name[]){
  studentId=sID;
  strcpy(name,Name);
};

// Display StudentId and Name
void Student::display(){
  cout<<"Student ID : "<<studentId<<endl
      <<"Name : "<<name<<endl;
};

