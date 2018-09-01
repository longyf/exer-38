#include <string>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

void print(string &s1) {
	for (auto iter = s1.begin(); iter != s1.end(); ++iter) {
		cout<<*iter;
	}
	cout<<endl;
}

void Permutation(string &s1, string::size_type index, set<string> &set1) {
	auto i = index;
	while (i != s1.size()) {
		swap(s1[index], s1[i]);
		if (index == s1.size() - 1) set1.insert(s1);
		Permutation(s1, index + 1, set1);
		swap(s1[index], s1[i]);
		i++;
	}
}

int main() {
	string s1 = "abc";
	vector<string> v1;
	set<string> set1;
	Permutation(s1, 0, set1);
	for (auto iter = set1.begin(); iter != set1.end(); ++iter) {
		v1.push_back(*iter);
	}

	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		print(*iter);
	}
	return 0;
}
