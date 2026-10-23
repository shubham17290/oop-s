#include <iostream>
#include <string>

using namespace std;
class Student {

  public:
    // attributes
    int id;
    int age;
    string name;
    int nos;

    // ctor: Default ctor
    Student() { cout << "Student Default ctor called" << endl; };

    // behaviour /methods / functions
    void study() { cout << this->name << " Studying" << endl; }
    void sleep() { cout << this->name << " Sleeping" << endl; }
    void bunk() { cout << this->name << " buncking" << endl; }

    // Dtor : Default Destructor

    ~Student() { cout << "Student Default dtor called" << endl; };
};

int main() {
    Student A;
    A.id = 1;
    A.age = 20;
    A.name = "Shubham";
    A.nos = 6;
    return 0;
}
