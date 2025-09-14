// Option 1: Write a program that will read in 3 grades from the keyboard and will print the average (to 2 decimal places) of those grades to the screen. It should include good prompts and labeled output.   Use the examples from the earlier labs to help you. You will want to begin with a design. The Lesson Set 1 Pre-lab Reading Assignment gave an introduction for a design similar to this problem. Notice in the sample run that the answer is stored in fixed point notation with two decimal points of precision.

// Sample Run:

// Please input the first grade: 97
// Please input the second grade: 98.3
// Please input the third grade: 95

// Output: The average of the three grades is 96.77

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float grade1, grade2, grade3;
    float average;

    cout << "Please input the first grade: ";
    cin >> grade1;

    cout << "Please input the second grade: ";
    cin >> grade2;

    cout << "Please input the third grade: ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3;

    cout << fixed << setprecision(2);
    cout << "The average of the three grades is " << average << endl;

    return 0;
}