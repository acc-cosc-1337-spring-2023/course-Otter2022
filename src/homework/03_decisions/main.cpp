//write include statements
#include <iostream>
#include "decisions.h"
using std::cout;
using std::cin;
using std::string;

int main(){
    int grade;
    int menuChoice;

    cout<<"***MAIN MENU***"<<"\n";
    cout<<"Enter menu choice(1-3)"<<"\n";
    cout<<"1 - Letter grade using if"<<"\n";
    cout<<"2 - letter grade using switch"<<"\n";
    cout<<"3 - exit"<<"\n";
    cin>>menuChoice;

    switch (menuChoice)
    {
    case 1:
        cout<<"Enter integer grade between 0 and 100"<<"\n";
        cin>>grade;
        if(grade >= 0 && grade <= 100){
            cout<<get_letter_grade_using_if(grade)<<"\n";
        } else {
            cout<<"not between 0 and 100"<<"\n";
        }
        break;
    case 2:
        cout<<"Enter integer grade between 0 and 100"<<"\n";
        cin>>grade;
        if(grade >= 0 && grade <= 100){
            cout<<get_letter_grade_using_switch(grade)<<"\n";
        } else {
            cout<<"not between 0 and 100"<<"\n";
        }
        break;
    case 3:
        cout<<"EXITING"<<"\n";
        break;
    default:
        cout<<"number out of range"<<"\n";
        break;
    }
    return 0;
}