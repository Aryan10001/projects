#include <iostream>
using namespace std;

int main()
{
    string Q1 , Q2 ,Q3 ,Q4,Q5, Q6, Q7, Q8 ,Q9 ,Q10;
    string ans1;
    string ans2;
    string ask;
    cout << "-------BY ARYAN KUMAR-------" << endl;
    cout << "Hello my name is friday you can ask me some questions" << endl;
    cout << "Type Q for questions";
    cin >> ans1;
    if (ans1 == "Q")
    {

        Q1 = "Type 1 for What is your name?";
        Q2 = "Type 2 for Who are you?";
        Q3 = "Type 3 for Where do you live?";
        Q4 = "Type 4 for Will Ai steal my job?";
        Q5 = "Type 5 for How dangerous is AI?";
        cout << Q1 << endl;
        cout << Q2 << endl;
        cout << Q3 << endl;
        cin >> ans2;
    }
    if (ans2 == "1")
    {
        cout << "My name is friday sir how name i help your?" << endl ;
    }
    if (ans2 == "2")
    {
        cout << "My name is friday sir and i am an A,I.AI is Artificial intelligence, It is simulation of human intelligence processes by machines, especially computer systems." << endl;
    }
    if (ans2 == "3")
    {
        cout << "I live in clouds" << endl;
    }
    if (ans2 == "4")
    {
        cout << "Artificial Intelligence is the fastest-growing field in the present-day. According to fortune, the statistics say that the hirings for AI specialists have grown by 74 % over the last 4 years. Artificial Intelligence is regarded as the “Hottest” job of the present generation."  << endl;
    }
    if (ans2 == "5")
    {
        cout << "Artificial Intelligence is the fastest-growing field in the present-day. According to fortune, the statistics say that the hirings for AI specialists have grown by 74 % over the last 4 years. Artificial Intelligence is regarded as the “Hottest” job of the present generation." << endl;
    }
    else
    {
        cout << "Sorry i cant understand what are you saying";
    }
    return 0;
}