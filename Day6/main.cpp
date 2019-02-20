/////
#include <iostream>

using namespace std;


int main()
{
    double first, second;
    char op;
    cout << "Please input first operand: ";
    cin >> first;
    cout << "Please input operator: (+/-/*//)";
    cin >> op;
    cout << "Please input second operand: ";
    cin >> second;
    
    cout << "What you will calculate is: " << 
        first << " " << op << " " << second << endl;

    double result;

    OpFunc func;
    switch(op)
    {
    case '+':
        func = add;
        break;
    case '-':
        func = sub;
        break;
    case '*':
        func = mul;
        break;
    case '/':
        func = div;
        break;
    default:
        cerr << "No such operator" << endl;
        return -1;
    }

    cout << "Result = " << func(first, second) << endl;

    return 0;
}

