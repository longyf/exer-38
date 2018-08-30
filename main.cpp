#include <string>
#include <iostream>
using namespace std;

void print(string &s1) {
	for (auto iter = s1.begin(); iter != s1.end(); ++iter) {
		cout<<*iter;
	}
	cout<<endl;
}

void Permutation(string &s1, string::size_type index) {
	auto i = index;
	while (i != s1.size()) {
		swap(s1[index], s1[i]);
		if (index == s1.size() - 1) print(s1);//index处理到最后一位了才需要输出。
		Permutation(s1, index + 1);
		swap(s1[index], s1[i]);
		i++;
	}
}

int main() {
	string s1 = "abc";
	Permutation(s1, 0);
	return 0;
}
