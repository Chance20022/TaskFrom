﻿#include <iostream>
#include <vector>
#include <ostream>

using namespace std;

int main()
{
	vector<string> name = { "null" };
	vector<int> scores = { 0 };
	string name1;
	int scores1 = 0;
	string search;

	while (true) {

		cout << "If you wanna to leave just input - Noname (enter) 0" << endl;
		cout << "Input the name - ";
		cin >> name1;
		cout << endl;
		cout << "Inpute the number - ";
		cin >> scores1;
		cout << endl;

		if (name1 == "Noname" && scores1 == 0)
			break;

		for (int i = 0; i < name.size(); i++) {
			if (name1 == name[i]) {
				cout << "You enter two same word, try again" << endl;
				break;
			}
			else {
				name.push_back(name1);
				scores.push_back(scores1);
			}
		}
	}

	name.erase(name.begin() + 0); // Удаляет первый и не нужный элемент массива
	scores.erase(scores.begin() + 0); // Удаляет первый и не нужный элемент массива

	cout << "Input needed a student - ", cin >> search;
	cout << endl;

	for (int i = 0; i < name.size(); i++) {
		if (search == name[i]) {
			cout << name[i] << " - " << scores[i] << endl;
		}
		else {
			cout << "Don't found a student " << search;
		}
	}
}