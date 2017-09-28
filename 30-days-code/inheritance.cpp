#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
    private:
        vector<int> testScores;  
    public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student( string firstName, string lastName, int id, vector<int> scores  ) : Person(firstName, lastName, id), testScores(scores) {}   

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){

            int vecLength = testScores.size();
            int avgScore;
            char letterGrade;
            for (int i = 0; i < vecLength; i++){ 
                avgScore += testScores[i];
            }
            avgScore = avgScore/vecLength;
            
            if ( avgScore <= 100 && avgScore >= 90 )
                letterGrade = 'O';
            else if ( avgScore < 90 && avgScore >= 80 )
                letterGrade = 'E';
            else if ( avgScore < 80 && avgScore >= 70 )
                letterGrade = 'A';
            else if ( avgScore < 70 && avgScore >= 55 )
                letterGrade = 'P';
            else if ( avgScore < 55 && avgScore >= 40 )
                letterGrade = 'D';
            else if ( avgScore < 40 )
                letterGrade = 'T';

            
            return letterGrade;
        }

};


int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}


