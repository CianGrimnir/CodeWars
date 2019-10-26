/*

Question is from testdome.com
User interface contains two types of user input controls: TextInput, 
which accepts all characters and NumericInput, which accepts only digits.

*/


#include <iostream>
#include <string>

class TextInput
{
public:
    virtual void add(char c) { this->value+=c; }

    std::string getValue() { return value; }

protected:
    std::string value;
};

class NumericInput : public TextInput 
{ 
public:
    void add(char c) {
    if (c >= '0' && c <= '9') 
        this->value+=c;
    }
};
#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif
