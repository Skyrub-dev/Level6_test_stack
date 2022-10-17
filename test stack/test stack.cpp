#include <iostream>
//Remember to include stack library
#include <stack>

int main()
{
    std::cout << "Example of a stack in C++";
    
    //Declaring stack
    std::stack<int> newstack;
    
    //Pushing one or several items into the stack
    newstack.push(10);
    newstack.push(20);
    newstack.push(30);
    newstack.push(40);

    //Can also use the pop attribute to remove the top most element of the stack - complexity of 0(1)
    //This removes 40 from the stack
    newstack.pop();

    //Reading from the stack
    while (!newstack.empty())
    {
        std::cout << newstack.top() << " ";
        newstack.pop();
    }


}