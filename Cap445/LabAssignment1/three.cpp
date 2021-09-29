#include <iostream>
using namespace std;

int main()
{
    int member;
    cout << "Enter total No. member that want to swing " << endl;
    cin >> member;
    cout << "Enter age of " << member << " member" << endl;
    int price = 0;
    int cnt = 0;
    for (int i = 0; i < member; i++)
    {
        int age;
        cin >> age;
        if (age < 10)
        {
            cout << "you are not eligible, Age is less\n";
        }
        else if (age > 20)
        {
            cout << "you are not eligible, Age is more\n";
        }
        else if (age >= 15 && age <= 15)
        {
            cout << "You are allowed and get 10% discount\n";
            price += 90;
            cnt++;
        }
        else
        {
            cout << "You are allowed and get 5% discount\n";
            price += 95;
            cnt++;
        }
    }
    if (cnt > 0)
        cout << "Total Ticket Price for " << cnt << " allowed person: " << price << " Rs. \n";
    return 0;
}