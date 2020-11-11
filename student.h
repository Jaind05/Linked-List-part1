#ifndef STUDENT_H
#define STUDENT_H

class student
{

 public:
  student();
  ~student();
  void setfirstname(char*);
  void setlastname(char*);
  void setGpa(float);
  void setid(int);
  char *getfirstname();
  char *getlastname();
  int getid();
  float getGpa();
  

 private:
  char *firstname;
  char *lastname;
  float Gpa;
  int id;
  

};


#endif












