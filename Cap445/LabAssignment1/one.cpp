#include <iostream>
using namespace std;

class Department
{
protected:
    string name;
    Department() {}

public:
    Department(string name)
    {
        this->name = name;
    }
};

class SCA : public Department
{
protected:
    int marks[3] = {56, 78, 89};
    string studentName[3] = {"Dinesh", "Deepak", "Rohit"};

public:
    SCA()
    {
        Department("SCA");
    }
    void gethHighestInSCA()
    {
        int id = 0;
        for (int i = 0; i < 3; i++)
        {
            if (marks[id] < marks[i])
                id = i;
        }
        cout << "Highest Marks In SCA " << endl;
        cout << "Name: " << studentName[id] << endl;
        cout << "Marks: " << marks[id] << endl;
    }
};

class SCS : public Department
{
protected:
    int marks[3] = {65, 71, 90};
    string studentName[3] = {"Rahul ", "Rahul", "Hrithik"};

public:
    SCS()
    {
        Department("SCS");
    }
    void gethHighestInSCS()
    {
        int id = 0;
        for (int i = 0; i < 3; i++)
        {
            if (marks[id] < marks[i])
                id = i;
        }
        cout << "Highest Marks In SCS " << endl;
        cout << "Name: " << studentName[id] << endl;
        cout << "Marks: " << marks[id] << endl;
    }
};

int main()
{
    SCA dep1;
    SCS dep2;
    dep1.gethHighestInSCA();
    dep2.gethHighestInSCS();
    return 0;
}