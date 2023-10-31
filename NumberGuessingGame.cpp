#include<iostream>
#include<random>
using namespace std;
int main()
{   
    int lb, ub;
    cout << "Welcome to the Number Guessing Game!!!" << endl;
    cout << "At First Enter the range." << endl;
    cout << "Enter the lower bound: ";
    cin >> lb;
    cout << endl;
    cout << "Enter the Upper bound: ";
    cin >> ub;
    cout << endl;
    random_device rd;
    uniform_int_distribution<int> dist(lb, ub);
    cout << "One Number has generated!!!" << endl;
    cout << "Guess the number!!!" << endl;
    while (1) {
        int choise;
        cin >> choise;
        if (choise < dist(rd)) {
            cout << "Oops!!! you have entered wrong." << endl << "Enter Larger Number." << endl;
        }
        else if (choise > dist(rd)) {
            cout << "Oops!!! you have entered wrong." << endl << "Enter Smaller Number." << endl;
        }
        else
         {
            cout << "Congratulations!!! You guessed the number correctly" << endl;
            exit(0);
        }
    }
    
    return 0;
}