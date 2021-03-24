#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	// Setter Function
	void setValues(string, string,
				string, string,
				string, int, int);

	// Function to ask questions
	void askQuestion();
};

// Driver code
int main()
{
	cout << "\n\n\t\t\t\tTHE DAILY QUIZ"
		<< endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	// Input
	cin.get();

	string Name;
	int Age;

	// Input the details
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
		return 0;
	}
	
	int level;
	cout << "Choose Level of your quiz:"<<endl
		<< " 1. Easy " << endl
		<< " 2. Medium " << endl
		<< " 3. Hard " << endl;
	cin>>level;
	
	// Objects of Question Class
	if(level==1){
		Question q1;
		Question q2;
		Question q3;
		Question q4;
		Question q5;
	
		// 3 is the position of
		// correct answer
		cout<<"......................Initializing Easy Level........................."<<endl;
		q1.setValues("Question : The format identifier ‘%i’ is also used for which data type? ", "char",
					"int", "float",
					"double", 1, 1);
		
		q2.setValues("Question : What is the size of an int data type?", "4 Bytes",
					"8 Bytes", "Depends on the system/compiler",
					"Cannot be determined", 2, 1);
		
		q3.setValues("Question : Which is correct with respect to the size of the data types?", "char > int > float",
					"int > char > float", "char < int < double",
					"double > char > int", 3, 1);
		
		q4.setValues("Question : What is the precedence of arithmetic operators (from highest to lowest)?", "%, *, /, +, –",
					"%, +, /, *, –", "+, -, %, *, /",
					"%, +, -, *, /", 4, 1);
		
		q5.setValues("Question : What is the default return type if it is not specified in function definition?", "void",
					"int", "double",
					"short int", 5, 1);
	
		q1.askQuestion();
		q2.askQuestion();
		q3.askQuestion();
		q4.askQuestion();
		q5.askQuestion();
		// Display the total score
		cout << "Total Score = " << Total
			<< " out of 5" << endl;
	
		// Display the results
	
		// If the player pass the quiz
		if (Total == 1) {
			cout << "Poor" << endl;
		}
		else if (Total == 2) {
			cout << "Bad" << endl;
		}
		else if (Total == 3) {
			cout << "Good" << endl;
		}
		else if (Total == 4) {
			cout << "Strong" << endl;
		}
		else if (Total == 5) {
			cout << "Very Strong" << endl;
		}
		else {
			cout << "Alas! You failed the quiz."
				<< endl;
			cout << "Better luck next time."
				<< endl;
		}
	}
	
	
	
	
	
	if(level==2){
		Question q1;
		Question q2;
		Question q3;
		Question q4;
		Question q5;
	
		// 3 is the position of
		// correct answer
		cout<<"......................Initializing Moderate Level...................."<<endl;
		q1.setValues("Question : The format identifier ‘%i’ is also used for which data type? ", "char",
					"int", "float",
					"double", 1, 1);
		q2.setValues("Question : What is the size of an int data type?", "4 Bytes",
					"8 Bytes", "Depends on the system/compiler",
					"Cannot be determined", 1, 1);
		q3.setValues("Question : Which is correct with respect to the size of the data types?", "char > int > float",
					"int > char > float", "char < int < double",
					"double > char > int", 2, 1);
		q4.setValues("Question : What is the precedence of arithmetic operators (from highest to lowest)?", "%, *, /, +, –",
					"%, +, /, *, –", "+, -, %, *, /",
					"%, +, -, *, /", 2, 1);
		q5.setValues("Question : What is the default return type if it is not specified in function definition?", "void",
					"int", "double",
					"short int", 3, 1);
	
		q1.askQuestion();
		q2.askQuestion();
		q3.askQuestion();
		q4.askQuestion();
		q5.askQuestion();
		// Display the total score
		cout << "Total Score = " << Total
			<< " out of 5" << endl;
	
		// Display the results
	
		// If the player pass the quiz
		if (Total == 1) {
			cout << "Poor" << endl;
		}
		else if (Total == 2) {
			cout << "Bad" << endl;
		}
		else if (Total == 3) {
			cout << "Good" << endl;
		}
		else if (Total == 4) {
			cout << "Strong" << endl;
		}
		else if (Total == 5) {
			cout << "Very Strong" << endl;
		}
		else {
			cout << "Alas! You failed the quiz."
				<< endl;
			cout << "Better luck next time."
				<< endl;
		}
	}
	
	
	
	else if(level==3){
		Question q1;
		Question q2;
		Question q3;
		Question q4;
		Question q5;
	
		// 3 is the position of
		// correct answer
		cout<<"......................Initializing Mighty Level......................"<<endl;
		q1.setValues("Question : The format identifier ‘%i’ is also used for which data type? ", "char",
					"int", "float",
					"double", 5, 1);
		q2.setValues("Question : What is the size of an int data type?", "4 Bytes",
					"8 Bytes", "Depends on the system/compiler",
					"Cannot be determined", 4, 1);
		q3.setValues("Question : Which is correct with respect to the size of the data types?", "char > int > float",
					"int > char > float", "char < int < double",
					"double > char > int", 3, 1);
		q4.setValues("Question : What is the precedence of arithmetic operators (from highest to lowest)?", "%, *, /, +, –",
					"%, +, /, *, –", "+, -, %, *, /",
					"%, +, -, *, /", 2, 1);
		q5.setValues("Question : What is the default return type if it is not specified in function definition?", "void",
					"int", "double",
					"short int", 1, 1);
	
		q1.askQuestion();
		q2.askQuestion();
		q3.askQuestion();
		q4.askQuestion();
		q5.askQuestion();
		// Display the total score
		cout << "Total Score = " << Total
			<< " out of 5" << endl;
	
		// Display the results
	
		// If the player pass the quiz
		if (Total == 1) {
			cout << "Poor" << endl;
		}
		else if (Total == 2) {
			cout << "Bad" << endl;
		}
		else if (Total == 3) {
			cout << "Good" << endl;
		}
		else if (Total == 4) {
			cout << "Strong" << endl;
		}
		else if (Total == 5) {
			cout << "Very Strong" << endl;
		}
		else {
			cout << "Alas! You failed the quiz."
				<< endl;
			cout << "Better luck next time."
				<< endl;
		}
	}
	return 0;
}

// Function to set the values of
// the questions
void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in number)"
		<< endl;
	cin >> Guess;

	// If the answer is correct
	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Correct !" << endl;

		// Update the correct score
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	// Otherise
	else {
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
