#include<iostream>
#include<iomanip>

using namespace std;

class TestScores {
	private:
		double score1;
		double score2;
		double score3;
	
	public:
		TestScores(double score, double score1, double score2) {
			this -> score1 = score1;
			this -> score2 = score2;
			this -> score3 = score3;
		}
		
		double Score1() {
			return score1;
		}
		
		double Score2() {
			return score2;
		}
		
		double Score3() {
			return score3;
		}
	
};

int main() {
	double score1;
	double score2;
	double score3; 
	double average;
	
	cout << "Enter Score 1: ";
	cin >> score1;
	
	cout << "Enter Score 2: ";
	cin >> score2;
	
	cout << "Enter Score 3: ";
	cin >> score3;
	
	average = (score1 + score2 + score3) /3;
	
	TestScores mark (score1, score2, score3);
	std::cout << std::setprecision(3) << showpoint << "Average: " << average;
	
	return 0;
}
