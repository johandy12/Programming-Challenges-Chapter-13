#include<iostream>
#include<iomanip>
using namespace std;

class Population {
	public:
		int populationNumber;
		int birthNumber;
		int deathNumber;
	
	public:
		Population(int populationNumber, int birthNumber, int deathNumber) {
			this -> populationNumber = populationNumber;
			this -> birthNumber = birthNumber;
			this -> deathNumber = deathNumber;
		}
	
		int PopulationNumber() {
			return populationNumber;
		}
		
		int BirthNumber() {
			return birthNumber;
		}
		
		int DeathNumber() {
			return deathNumber;
		}
};

int main() {
	double populationNumber;
	double birthNumber;
	double deathNumber;
	double birthRate;
	double deathRate;
	
	cout << "Population Data" << endl << endl;
	cout << "Enter the number of population: ";
	cin >> populationNumber;
	cout << "Enter the number of birth: ";
	cin >> birthNumber;
	cout << "Enter the number of death: ";
	cin >> deathNumber;
	
	birthRate = birthNumber / populationNumber; 
	deathRate = deathNumber / populationNumber;
	
	cout << fixed << setprecision(2) << showpoint << "Birth Rate: " << birthNumber << " / " << populationNumber 
	<< " = " << birthRate << endl; 
	
	cout << fixed << setprecision(2) << showpoint << "Death Rate: " << deathNumber << " / " << populationNumber 
	<< " = " << deathRate << endl; 
	
	return 0;
}
