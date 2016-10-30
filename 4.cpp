#include <iostream>
#include <string>

using namespace std ;

class Data {
	private:
		string name ;
		string address ;
		int age ;
		int phone ;
	
	public :
		Data (string name, string address, int age, int phone) {
			this -> name = name ;
			this -> address = address ;
			this -> age = age ;
			this -> phone = phone ;
		}
	
		string Name() {
			return name ;
		}
	
		string Address() {
			return address ;
		}
	
		int Age() {
			return age ;
		}
	
		int Phone() {
			return phone ;
		}
};


int main() {
	Data myData = Data ("Johandy", "Jakarta Utara", 18, 01234567);
	Data friendA = Data ("Markus", "Jakarta Pusat", 18, 07654321);
	Data friendB = Data ("Albert", "Jakarta Selatan", 20, 04672512);
	
	Data profile[3] = {myData, friendA, friendB};
	
	for (int i = 0; i < 3; i++) {
		cout << profile[i].Name() << endl << profile[i].Address() << endl << profile[i].Age()
		<< endl << profile[i].Phone() << endl << endl;
	}
	
return 0;	
}
