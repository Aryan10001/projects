#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    string wait;
    cout << "Enter the 1st number" << endl;
    cin >> a;
    cout << "Enter the 2st number" << endl;
    cin >> b;
    cout << "Type 1 for Addition" << endl;
    cout << "Type 2 for Subtraction" << endl;
    cout << "Type 3 for Multiplication" << endl;
    cout << "Type 4 for Division" << endl;
    cin >> c;
    if (c == 1)
    {
        cout <<"--------"<< endl;
        cout << "  Ans - " <<a + b << endl;
        cout <<"--------"<< endl;
    }
    else if (c == 2)
    {
        cout <<"--------"<< endl;
        cout << "  Ans - " <<a - b << endl;
        cout <<"--------"<< endl;
    }
    else if (c == 3)
    {
        cout <<"--------"<< endl;
        cout << "  Ans - " <<a * b << endl;
        cout <<"--------"<< endl;
    }
    else if (c == 4)
    {
        cout <<"--------"<< endl;
        cout << "  Ans - " <<a / b << endl;
        cout <<"--------"<< endl;
    }
    else
    {
        cout << " I can't understand" << endl;
    }
    
    cout << "Press any key and enter to Exit" << endl;
    cin >> wait;
    
    return 0;
}