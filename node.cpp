
//Dhruv Jain
//11/11/20
//node.cpp for linked list


#include <cstring>
#include "node.h"
#include <iostream>


node::node(student* temp){ //constructor
  s = temp;
}
node::~node(){ //destructor
  
}
node* node::getnext(){ //get publisher
  return n;
}
student* node::getStudent(){ //get rating
  return s;
}
void node::setnext(node *x){ //set rating
  n = x;
}


