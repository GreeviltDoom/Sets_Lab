#include <iostream>
#include <set>

using namespace std;

int main()

{

	set<int> mySet1; // объявили пустое множество

	multiset<int> mySet2; // объявили пустое мультимножество

	// добавляем элементы в множество

	mySet1.insert(1);

	mySet1.insert(2);

	mySet1.insert(3);

	mySet1.insert(1);

	// добавляем элементы в мультимножество

	mySet2.insert(1);

	mySet2.insert(2);

	mySet2.insert(3);

	mySet2.insert(1);

	set<int>::iterator it; //создание итератора

	for (it = mySet1.begin(); it != mySet1.end(); it++) { // Вывод всех элементов

		cout << (*it) << ""; // множества

	}

	cout << endl;

	for (it = mySet2.begin(); it != mySet2.end(); it++) { // Вывод всех элементов

		cout << (*it) << ""; // мультимножества

	}

	return 0;

}