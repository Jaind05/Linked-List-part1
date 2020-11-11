#include <cstring>
#include "student.h"
#include <iostream>


student::student(){ //constructor
  
}
student::~student(){ //destructor
 
}
char* student::getfirstname(){ //get publisher
  return firstname;
}
char* student::getlastname(){ //get rating
  return lastname;
}
void student::setGpa(float x){ //set rating
  Gpa = x;
}
void student::setfirstname(char* x){//set publisher
  strcpy(firstname, x);
}
void student::setlastname(char* y){
  strcpy(lastname, y);
}
float student::getGpa(){ //get rating
  return Gpa;
}
int student::getid(){ //get rating
  return id;
}
void student::setid(int x){ //get rating
  id = x;
}

