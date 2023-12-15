#include <iostream>
#include <string>

using std::cout;
using std::endl;

#include <array>
void hello_array(void){
	std::array<int, 5> x = {{0, 2, 4, 6, 8}};
	cout << x[1] << endl;
}

#include <tuple>
void hello_tuple(void){
	std::string name;
	std::string country;
	int age;
	std::tuple<std::string, int> person { "Bob", 20 };
	std::tuple<std::string, int, std::string> person2 { "Bob", 20, "USA" };

	std::tie(name, age, country) = person2;

	cout << std::get<0>(person) << endl;
	cout << name << ", " << age << ", " << country << endl;
}

#include <utility>
void hello_pair(void){
	std::pair<std::string, int> person {"Bob", 20};
	cout << "by std::get : " << std::get<0>(person) << endl;
	cout << "by first : " << person.first << ", second: " << person.second << endl;
}

#include <map>
#include <unordered_map>
void hello_map(void){
	std::map<std::string, int> persons = {
		{"Alice", 18},
		{"Bob",   20},
	};
	std::unordered_map<std::string, int> persons2 = {
		{"Alice", 18},
		{"Bob",   20},
	};
}

int main(void){
	cout << "hello" << endl;
	hello_array();
	hello_tuple();
	hello_pair();
	return 0;
}
