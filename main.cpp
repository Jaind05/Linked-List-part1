#include "node.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(){
  student *s1 = new student;
  student *s2 = new student;
  student *s3 = new student;
  node *head = NULL;
  node *node1 = new node(s1);
  node *node2 = new node(s2);
  node *node3 = new node(s3);
  head = node1;
  node1 -> setnext(node2);
  node2 -> setnext(node3);
  node3 -> setnext(NULL);
  node *temp = head;
  for (int i = 0; i < 3; i++){
    char input[100];
    cout << "what would you like the first name to be?" << endl;
    cin >> input;
    (temp->getStudent())->setfirstname(input);
    cout << "what would you like the last name to be?" << endl;
    cin >> input;
    (temp->getStudent())->setlastname(input);
    cout << "what would you like the id  to be?" << endl;
    int tempid;
    cin >> tempid;
    (temp->getStudent())->setid(tempid);
    cout << "what would you like the Gpa to be?" << endl;
    float tempGpa;
    cin >> tempGpa;
    (temp->getStudent())->setGpa(tempGpa);
    temp = temp->getnext();
  }
  temp = head;
  for (int i = 0; i < 3; i++){
    cout << (temp->getStudent())->getfirstname() << " " << (temp->getStudent())->getlastname() << " " <<(temp->getStudent())->getid() << " " << (temp->getStudent())->getGpa() << " " << endl;
    temp = temp->getnext();

  }
  
  
  


}
