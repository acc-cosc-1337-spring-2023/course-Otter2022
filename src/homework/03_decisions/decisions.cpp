//write include statement for decisions header
#include "decisions.h"
using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string result;

    if(grade <= 100 && grade >= 90)
    {
        result = "A";
    }
    else if(grade < 90 && grade >= 80)
    {
        result = "B";
    }
    else if(grade < 80 && grade >= 70)
    {
        result = "C";
    }
    else if(grade < 70 && grade >= 60)
    {
        result = "D";
    }
    else if(grade < 60 && grade >= 0)
    {
        result = "F";
    }
    return result;
}

string get_letter_grade_using_switch(int grade)
{
    string result;
    int gradedivten = grade / 10;
    switch (gradedivten)
    {
    case 10:
        result = "A";
        break;
    case 9:
        result = "A";
        break;
    case 8:
        result = "B";
        break;
    case 7:
        result = "C";
        break;
    case 6:
        result = "D";
        break;
    default:
        result = "F";
        break;
    }
    return result;
}