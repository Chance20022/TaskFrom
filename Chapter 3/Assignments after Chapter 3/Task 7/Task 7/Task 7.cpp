﻿#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "Please, enter yout name - ", cin >> name;
    cout << endl;

    string first_name;

    cout << "Please, enter the name of the recipient - ", cin >> first_name;
    cout << endl;
    cout << "Dear " << first_name << "," << endl;
    cout << "How are you? I am all good. I miss you. When we meet? I can not wait for our meeting to happen." << endl;

    string friend_name;

    cout << "Please, enter name your friend - ", cin >> friend_name;
    cout << endl;
    cout << "Have you met " << friend_name << " for a long time?" << endl;

    char friend_sex = '0';

    cout << "If your friend is man - taped 'm', if female - taped 'f' - ", cin >> friend_sex;
    cout << endl;

    if (friend_sex == 'm')
        cout << "If you will see " << friend_name << " please, ask him to call me back" << endl;
    if (friend_sex == 'f')
        cout << "If you will see " << friend_name << " please, ask his to call me back" << endl;

    int age = 0;

point:
    cout << "Please, enter age of your friend - ", cin >> age;
    cout << endl;
    if (age > 110) {
        cout << "Are you kidding?" << endl;
        goto point;
    }
    else if (age < 0) {
        cout << "Are you kidding?" << endl;
        goto point;
    }
    else {
        cout << "I heard you just celebrated your birthday and you turned " << age << " years old" << endl;
    }

    if (age <= 12)
        cout << "Next year you will be " << age + 1 << " years old" << endl;
    else if (age == 17)
        cout << "Next years you will be able to vote" << endl;
    else if (age >= 70)
        cout << "I hope you do not miss retirement" << endl;

    cout << "Yours sincerely          " << name << endl;
}