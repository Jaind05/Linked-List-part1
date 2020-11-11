#ifndef NODE_H
#define NODE_H
#include "student.h"
class node 
{

 public:
  node(student *);
  ~node();
  node* getnext();
  void setnext(node*);
  student* getStudent();

 private:
    student *s;
    node *n; //room_id
};


#endif






