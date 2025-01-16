#include <iostream>

#include<string>

using namespace std;

int main()

{

    string item_name;

    int price;

    int no_item;

    double bill;

    double sum = 0;

    int total_item = 0;

    double gst;

    double Tax;

    double tax_z = 0.0;

#

    do

    {

        cout << "Enter the number of items : ";

        cin >> no_item;

        if (no_item != 0)

        {

            cout << "Enter the item name: ";

            cin >> item_name;

            cout << "Enter the price: ";

            cin >> price;

            if (price <= 50)

            {

                gst = 0.025 * price;

                cout << "Government tax for single item : " << gst << endl;

            }

            else

            {

                gst = 0.05 * price;

                cout << "Government tax for single item : " << gst << endl;

            }

            Tax = no_item * gst;

            cout << "Your total GST:" << Tax << endl;

            tax_z += Tax;

            total_item += no_item;

            bill = price * no_item + Tax;

            sum += bill;

        }

    }

    while (no_item != 0);

    cout << "Total items: " << total_item << endl;

    cout << "Total gst included in bill:" << tax_z << endl;

    cout << "Total bill: " << sum << endl;

    cout << "Thank you for shopping. :)" << endl;

    "return 0";
}

