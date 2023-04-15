#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main() {

	map<int, set<string>> wordsOnPage;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string word;
		int page;
		cin >> word >> page;
		wordsOnPage[page].insert(word);

	}

	for (const auto& i : wordsOnPage)
	{
		cout << i.first;
		for (string words : i.second) {
			cout << " " << words;
		}
		cout << "\n";
	}
	
	return 0;
	system("pause");
}

