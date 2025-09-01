#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    long long int r_no;

public:
    Student()
    {
        name = "[USER]";
        r_no = 0;
    }

    void set_name(string x)
    {
        name = x;
    }

    void set_r_no(long long int x){
        r_no = x;
    };

    void display() {
        cout << name << ": " << r_no << endl;
    };
};

int main(void)
{
    Student s;
    s.set_name("Abhisar Behera");
    s.set_r_no(24070123002LL);
    s.display();
    return 0;
}
