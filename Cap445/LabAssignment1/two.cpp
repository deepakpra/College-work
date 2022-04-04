#include <iostream>
using namespace std;

class Company
{
protected:
    string productList[5] = {"Shop", "Shampoo", "Headphone", "Toothpaste", "Milk"};
    int quantity[5] = {3, 4, 5, 2, 2};

public:
    void displayItem()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " " << productList[i] << endl;
        }
    }
};

class Bill : public Company
{
public:
    int id = 0, itemBuy = 0;
    Bill(int id, int itemBuy)
    {
        this->id = id;
        this->itemBuy = itemBuy;
        if (itemBuy > quantity[id])
        {
            cout << "Please select less Quantity" << endl;
        }
        else
        {
            cout << "Pay: " << 1000 * itemBuy << " Rs. " << endl;
        }
    }
};

int main()
{

    Company com;
    while (1)
    {
        cout << "Select Item that you want yo purchnase " << endl;
        int id, itemBuy;
        com.displayItem();
        cin >> id;
        if (id > 5 || id <= 0)
            break;
        cout << "Enter No. of Quantity " << endl;
        cin >> itemBuy;

        Bill(id, itemBuy);
    }

    return 0;
}
