#include <iostream>
#include <string>

using namespace std;

// Question Link : https://www.hackerrank.com/challenges/30-inheritance/problem?isFullScreen=true

class Person {
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

class Student : public Person {
    private:
        int* testScores; 
        int numScores;   
    public:
        Student(string firstName, string lastName, int identification, int* scores, int numScores) 
        : Person(firstName, lastName, identification) {
            this->testScores = scores;
            this->numScores = numScores;
        }
        char calculate() {
            int sum = 0;
            
            for(int i = 0; i < numScores; i++) {
                sum += testScores[i];
            }
            
            int average =sum / numScores;
        
            if (average >=90 && average <=100) {
                return 'O';
            } else if (average >=80 && average <90) {
                return 'E';
            } else if (average >=70 && average <80) {
                return 'A';
            } else if (average >=55 && average <70) {
                return 'P';
            } else if (average >=40 && average<55) {
                return 'D';
            } else {
                return 'T';
            }
        }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    
    cin >> firstName >> lastName >> id >> numScores;
    
    int* scores = new int[numScores];
    
    for(int i = 0; i < numScores; i++){
        cin >> scores[i];
    }
    
    Student* s = new Student(firstName, lastName, id, scores, numScores);
    
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    
    delete[] scores;
    delete s;
    
    return 0;
}