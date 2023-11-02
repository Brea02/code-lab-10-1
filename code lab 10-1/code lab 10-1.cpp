#include<iostream>
#include<string>

using namespace std;

int count_letters(string str);

int main() {

	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q") break;
		count_letters(str);

	}
}

int count_letters(string str) {
	string last_character = str.substr(str.length() - 1, 1);
	int num_last = str.length() - 1;

	int upper = 0;
	int lower = 0;

	for (int x = 0; x <= num_last; x++) {
		string cut = str.substr(x, 1);
		if (str[x] >= 'A' && str[x] <= 'Z') {
			upper++;
		}
		else if (str[x] >= 'a' && str[x] <= 'z') {
			lower++;
		}
	}

	cout << "# of lowercase: " << lower << endl;
	cout << "# of uppercase: " << upper << endl;
	return 0;
}

