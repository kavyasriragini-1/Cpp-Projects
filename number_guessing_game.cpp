#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int randomno=rand()%100+1;
    int guess;
    int attempts=0;
    cout<<"********Welcome to Number Guessing Game*********\n";
    cout<<"Random number is choosen between 1 to 100. Try to guess.\n\n";
    while(1) {
        cout<<"Enter your guess: ";
        cin>>guess;
        if(guess<randomno) {
            cout<<"Oops your guess "<<guess<<" is low. Try higher numbers.\n";
            attempts++;
        }
        else if(guess>randomno){
            cout<<"Oops your guess "<<guess<<" is high. Try lower numbers.\n";
            attempts++;
        }
        else {
            cout<<"Hurray! Your guess "<<guess<<" is correct.\n";
            attempts++;
            cout<<"Attempts: "<<attempts;
            break;
        }    
    }
    return 0;
}