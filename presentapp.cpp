#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int roll;
    string wait;
    string d;
    string b;
    string c;
    string SynOfRoll;
    string SynOfName;
    string present;
    string absent;
    string name;
    string mark;

    b = roll;
    c = name;
    SynOfName = "Name :- ";
    d = SynOfName;
    SynOfRoll = "Roll no :- ";
    present = "Present";
    absent = "ABSENT";
    SynOfRoll = "Roll no :- ";

    cout << "-------BY ARYAN KUMAR-------" << endl;
    cout << "----------------------------" << endl;
    cout << "WHAT IS YOUR NAME?";
    cin >> name;
    cout << "WHAT IS YOUR Roll number?";
    cin >> roll;
    cout << "P for present and A for absent";
    cin >> mark;

    if (mark == "A")
    {
        cout << name << " HAVE MARKED ABSENT!" << endl;
        ofstream out("TextFile1.txt");
        out << name << endl;
        out << SynOfRoll;
        out << roll << endl;
        out << absent;
        
    }
    else if (mark == "P")
    {
        cout << name << " HAVE MARKED PRESENT" << endl;
        ofstream out("TextFile1.txt");
        out << d;
        out << name << endl;
        out << SynOfRoll;
        out << roll << endl;
        out << present << endl;
    }
    cout << "-------DONE!-------" << endl;
    cout << "-------------------" << endl;
    cout << "Press any key and enter to Exit" << endl;
    cin >> wait;
}
