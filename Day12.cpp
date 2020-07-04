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
       Student(string firstN, string lastN, int idS, vector<int> scores): Person(firstN,lastN,idS)
       {
         this->testScores=scores;
       }
        char calculate()
        {
            float a=0;
            char A;
            int i,
            subs=testScores.size();;
            for(i=0;i< subs;i++)
             a+=testScores[i];
             a=a/testScores.size();
             if(a<=100&&a>=90)
             A='O';
             else if(a<90&&a>=80)
             A='E';
             else if(a<80&&a>=70)
             A='A';
             else if(a<70&&a>=55)
             A='P';
             else if(a<55&&a>=40)
             A='D';
             else if(a<40)
             A='T';
             return A;
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
