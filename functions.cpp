#include <iostream>
#include <cstdlib>
using namespace std;

void add(){
    int a, b;
    cout << "enter a number" << endl;
    cin >> a;
    cout << "enter a number" << endl;
    cin >> b;
    cout << a+b << endl;
}

void subtract (int a, int b){
    cout << a-b << endl;
}

void multiply (int a, int b){
    cout << a*b << endl;
}
void divide(int a, int b){
    if (b==0){
        cout << "cannot be divided by zero" << endl;
        return;
    }
    cout << a/b << endl;
}

void factorial (){
    int x, result =1;
    cout << "Enter a number" << endl;
    cin >> x;
    for (int i =1; i <=x; i++){
        result *=i;
        cout << result << endl;
        }
    }

void primerNumber(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (num <= 1) {
    cout << "Number is not prime" << endl;
    } else {
    if (num % 2 == 0) {
      cout << "Number is not prime" << endl;
    } else {
      cout << "Number is prime" << endl;
    }
  }
}


    void converter(){
        int action;
        cout << "convert celsius -fahrenheit press 1" << endl;
        cout << "convert fahrenheit -celsius press 2" << endl;
        cin >> action;
        switch(action){
            case 1:{
                int celsius;
                cout << "enter degrees celsius " << endl;
                cin >> celsius;
                int fahrenheit  = (celsius * 9/5) + 32;
                cout << "The temperature in Fahrenheit is: " << fahrenheit << "°F" << endl;}
                break;
            case 2:{
                int farenheit1;
                cout << "enter degrees farenheit " << endl;
                cin >> farenheit1;
                int celsius1 = (farenheit1 - 32) * 5/9;
                cout << "The temperature in Celsius is: " << celsius1 << "°C" << endl;}
                break;
                default:
                cout << "Invalid option. Please enter 1 or 2." << endl;
        }
    }


    void guessNumber() {
    int numUser;
    int randomNumber = rand() % 100 + 1;
    int attempts = 0;

        cout << "Guess a number between 1 and 100!" << endl;

    while (numUser != randomNumber && attempts < 5) {
        cin >> numUser;
        attempts++;

        if (numUser < randomNumber) {
            cout << "Your guess is too low. Try again!" << endl;
        if (randomNumber - numUser > 10) {
            cout << "Hint: It's more than 10 points higher." << endl;
        }
        } else if (numUser > randomNumber) {
            cout << "Your guess is too high. Try again!" << endl;
        if (numUser - randomNumber > 10) {
            cout << "Hint: It's more than 10 points lower." << endl;
      }
    }
  }

    if (numUser == randomNumber) {
        cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
    } else {
        cout << "You ran out of guesses! The number was " << randomNumber << "." << endl;
  }
}
