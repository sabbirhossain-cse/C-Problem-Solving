// Problem: Calculating Factorial
// Idea: Using a for loop for multiplication

#include<iostream>
using namespace std;

int main() 
{
    int number, factorial;

    cout << "Please enter an integer to calculate factorial : " ;
    cin >> number;

    factorial=1;

    for(int i=number; i>=1; i--)
    {
       factorial=factorial*i;
    }
    
    cout << "Factorial of " << number << " is = " << factorial << endl;

    return 0;
}
