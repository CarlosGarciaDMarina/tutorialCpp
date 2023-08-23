//Library
#include <iostream>

//Using
using namespace std;

//Functions
//This function adds two numbers and return the result
float add(float num1, float num2)
{
    //variable
    float result = 0.0f;

    //We carried out the operation.
    result = num1 + num2; 

    //We return the result
    return result;
}

//This function substract two numbers and return the result
float substract(float num1, float num2)
{
    //Variable
    float result = 0.0f;

    //We carried out the operation
    result = num1 - num2;

    //We return the result
    return result;
}

//This function multiply two numbers and return the result
float multiply(float num1, float num2)
{
    //Variable
    float result = 0.0f;

    //We carried out the operation
    result = num1 * num2;

    //We return the result
    return result;
}

//This function divide two numbers and return the result
float divide(float num1, float num2)
{
    //Variable
    float result = 0.0f;

    //We carried out the operation
    result = num1 / num2;

    //We return the result
    return result;
}


int main()
{
    //variable
    int menu = 0;
    int answer = 0;
    float num1 = 0.0f;
    float num2 = 0.0f;

    //Start the loop
    do
    {
        //We display the graphical interface
        cout << "|--------------------|" << endl;
        cout << "| 1.- Add.           |" << endl;
        cout << "| 2.- Substract.     |" << endl;
        cout << "| 3.- Multiply.      |" << endl;
        cout << "| 4.- Divide.        |" << endl;
        cout << "|--------------------|" << endl;
        cout << "Please enter a menu option: " << endl;
        cin >> menu; //Capture

        //Start the loop
        switch (menu)
        {
        case 1:
            /* Add */
            //We ask the user for the two numbers
            cout << "You have selected the option to add." << endl;
            cout << "Enter the first number:" << endl;
            cin >> num1; //Capture
            cout << "Enter the second number:" << endl;
            cin >> num2; //Capture

            //We call the addition function and save it in the variable's answer
            answer = add(num1,num2);

            //We display the results
            cout << "The result of adding the number " << num1 << " and the number " << num2 << " is " << answer << "." << endl;
            break;
        case 2:
            /* Substact */
            //We ask the user for the two numbers
            cout << "You have selected the option to substract." << endl;
            cout << "Enter the first number:" << endl;
            cin >> num1; //Capture
            cout << "Enter the second number:" << endl;
            cin >> num2; //Capture

            //We call the addition function and save it in the variable's answer
            answer = substract(num1,num2);

            //We display the results
            cout << "The result of substract the number " << num1 << " and the number " << num2 << " is " << answer << "." << endl;
            break;
        case 3:
            /* Multiply */
            //We ask the user for the two numbers
            cout << "You have selected the option to multiply." << endl;
            cout << "Enter the first number:" << endl;
            cin >> num1; //Capture
            cout << "Enter the second number:" << endl;
            cin >> num2; //Capture

            //We call the addition function and save it in the variable's answer
            answer = multiply(num1,num2);

            //We display the results
            cout << "The result of multiply the number " << num1 << " and the number " << num2 << " is " << answer << "." << endl;
            break;
        case 4:
            /* Divide */
            //We ask the user for the two numbers
            cout << "You have selected the option to divide." << endl;
            cout << "Enter the first number:" << endl;
            cin >> num1; //Capture
            cout << "Enter the second number:" << endl;
            cin >> num2; //Capture

            //We call the addition function and save it in the variable's answer
            answer = divide(num1,num2);

            //We display the results
            cout << "The result of divide the number " << num1 << " and the number " << num2 << " is " << answer << "." << endl;
            break;
        default:
        cout << "Has introducido un caracter incorrecto." << endl;
            break;
        }
    } while (menu < 0 && menu >4);
    

    return 0;
}


