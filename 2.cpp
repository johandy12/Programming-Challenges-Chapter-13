#include <string>
#include <iostream>

using namespace std ;

class employee {
	string name ;
	string department ;
	string position ;
	int idNumber ; 
	
	public :
		employee (string name, int idNumber, string department, string position) {
			this -> name = name ;
			this -> idNumber = idNumber ;
			this -> department = department ;
			this -> position = position ;
		}
		
		employee (string name , int idNumber) {
			this -> name = name ;
			this -> idNumber = idNumber ;
			this -> department = "" ;
			this -> position = "" ;
		}
		
		employee () {	
			this -> name = "";
			this -> idNumber = 0 ;
			this -> department = "" ;
			this -> position = "" ;
		}
		
		string Name() {
			return name ;
		}
		
		int ID() {
			return idNumber ;
		}
		
		string Department() {
			return department ;
		}
		
		string Position() {
			return position ;
		}
};


int main() {
	employee id1 = employee ("Susan Meyers", 47899, "Acounting","Vice president");
	employee id2 = employee ("Mark Jones", 39199 , "IT", "Programmer");
	employee id3 = employee ("Joy Rogers", 81774 , "Manufacturing", "Engineer");
	
	employee idArr [3]={id1, id2, id3};
	
	for(int i=0 ; i<3 ; i++) {
		cout << idArr[i].Name() << "\t" << idArr[i].ID() << "\t" << idArr[i].Department() 
		<< "\t" << idArr[i].Position() << endl;
	}
	
	return 0;
}
