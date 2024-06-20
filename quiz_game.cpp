#include <iostream>
#include <string>

using namespace std;

// Function to display a question and get the answer from the user
int askQuestion(string question, string a, string b, string c, string d, char correctAnswer) {
    char answer;
    cout << question << endl;
    cout << "a. " << a << endl;
    cout << "b. " << b << endl;
    cout << "c. " << c << endl;
    cout << "d. " << d << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == correctAnswer) {
        cout << "Correct!\n" << endl;
        return 1;
    } else {
        cout << "Wrong! The correct answer is " << correctAnswer << ".\n" << endl;
        return 0;
    }
}

int main() {
    int score = 0;

    // Question 1
    score += askQuestion(
        "What is the capital of France?",
        "Berlin",
        "Madrid",
        "Paris",
        "Rome",
        'c'
    );

    // Question 2
    score += askQuestion(
        "What is 2 + 2?",
        "3",
        "4",
        "5",
        "6",
        'b'
    );

    // Question 3
    score += askQuestion(
        "What is the largest planet in our solar system?",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        'c'
    );

    // Question 4
    score += askQuestion(
        "Which language is this quiz written in?",
        "Python",
        "Java",
        "C++",
        "Ruby",
        'c'
    );

    cout << "Your final score is: " << score << "/4" << endl;

    if (score == 4) {
        cout << "Excellent! You got all the answers right!" << endl;
    } else if (score == 3) {
        cout << "Good job! You got most of the answers right!" << endl;
    } else if (score == 2) {
        cout << "You got half of the answers right." << endl;
    } else {
        cout << "Better luck next time!" << endl;
    }

    return 0;
}

