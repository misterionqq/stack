#include "../stack/stack.h"

#include <iostream>
#include <string>

using namespace std;

void testOfWorkingWithInt() {
    cout << "Testing of working with integer \n" << endl;
    Stack<int> intStack;

    intStack.push(123);
    if (intStack.top() == 123) cout << "Test 1 (push) - OK" << endl;
    else cout << "Test 1 (push) - FAILED" << endl;

    intStack.push(456);
    if (intStack.top() == 456) cout << "Test 2 (push) - OK" << endl;
    else cout << "Test 2 (push) - FAILED" << endl;

    intStack.push(789);
    if (intStack.top() == 789) cout << "Test 3 (push) - OK" << endl;
    else cout << "Test 3 (push) - FAILED" << endl;

    intStack.pop();
    if (intStack.top() == 456) cout << "Test 4 (pop) - OK" << endl;
    else cout << "Test 4 (pop) - FAILED" << endl;

    intStack.pop();
    if (intStack.top() == 123) cout << "Test 5 (pop) - OK" << endl;
    else cout << "Test 5 (pop) - FAILED" << endl;

    intStack.pop();
    if (intStack.isEmpty()) cout << "Test 6 (empty stack) - OK" << endl;
    else cout << "Test 6 (empty stack) - FAILED" << endl;

    intStack.push(123);
    intStack.push(456);
    intStack.push(789);

    Stack<int> intStackCopy = intStack;
    if (intStackCopy.top() == 789) cout << "Test 7 (copy constructor) - OK" << endl;
    else cout << "Test 7 (copy constructor) - FAILED" << endl;

    Stack<int> intStackMove = std::move(intStack);
    if (intStackMove.top() == 789) cout << "Test 8 (move constructor) - OK" << endl;
    else cout << "Test 8 (move constructor) - FAILED" << endl;

    if (intStack.isEmpty()) cout << "Test 9 (empty after moving) - OK" << endl;
    else cout << "Test 9 (empty after moving) - FAILED" << endl;

    intStackCopy.push(777);
    Stack<int> intStackAssignedCopy;
    intStackAssignedCopy = intStackCopy;
    if (intStackAssignedCopy.top() == 777) cout << "Test 10 (copy assignment) - OK" << endl;
    else cout << "Test 10 (copy assignment) - FAILED" << endl;

    Stack<int> intStackAssignedMove;
    intStackAssignedMove = std::move(intStackAssignedCopy);
    if (intStackAssignedMove.top() == 777) cout << "Test 11 (move assignment) - OK" << endl;
    else cout << "Test 11 (move assignment) - FAILED" << endl;

    if (intStackAssignedCopy.isEmpty()) cout << "Test 12 (empty after move assignment) - OK" << endl;
    else cout << "Test 12 (empty after move assignment) - FAILED" << endl;

    cout << "\n==================================\n" << endl;
}

void testOfWorkingWithDouble() {
    cout << "Testing of working with double \n" << endl;
    Stack<double> doubleStack;

    doubleStack.push(123.456);
    if (doubleStack.top() == 123.456) cout << "Test 1 (push) - OK" << endl;
    else cout << "Test 1 (push) - FAILED" << endl;

    doubleStack.push(456.789);
    if (doubleStack.top() == 456.789) cout << "Test 2 (push) - OK" << endl;
    else cout << "Test 2 (push) - FAILED" << endl;

    doubleStack.push(789.123);
    if (doubleStack.top() == 789.123) cout << "Test 3 (push) - OK" << endl;
    else cout << "Test 3 (push) - FAILED" << endl;

    doubleStack.pop();
    if (doubleStack.top() == 456.789) cout << "Test 4 (pop) - OK" << endl;
    else cout << "Test 4 (pop) - FAILED" << endl;

    doubleStack.pop();
    if (doubleStack.top() == 123.456) cout << "Test 5 (pop) - OK" << endl;
    else cout << "Test 5 (pop) - FAILED" << endl;

    doubleStack.pop();
    if (doubleStack.isEmpty()) cout << "Test 6 (empty stack) - OK" << endl;
    else cout << "Test 6 (empty stack) - FAILED" << endl;

    doubleStack.push(123.456);
    doubleStack.push(456.789);
    doubleStack.push(789.123);

    Stack<double> doubleStackCopy = doubleStack;
    if (doubleStackCopy.top() == 789.123) cout << "Test 7 (copy constructor) - OK" << endl;
    else cout << "Test 7 (copy constructor) - FAILED" << endl;

    Stack<double> doubleStackMove = std::move(doubleStack);
    if (doubleStackMove.top() == 789.123) cout << "Test 8 (move constructor) - OK" << endl;
    else cout << "Test 8 (move constructor) - FAILED" << endl;

    if (doubleStack.isEmpty()) cout << "Test 9 (empty after moving) - OK" << endl;
    else cout << "Test 9 (empty after moving) - FAILED" << endl;

    doubleStackCopy.push(777.777);
    Stack<double> doubleStackAssignedCopy;
    doubleStackAssignedCopy = doubleStackCopy;
    if (doubleStackAssignedCopy.top() == 777.777) cout << "Test 10 (copy assignment) - OK" << endl;
    else cout << "Test 10 (copy assignment) - FAILED" << endl;

    Stack<double> doubleStackAssignedMove;
    doubleStackAssignedMove = std::move(doubleStackAssignedCopy);
    if (doubleStackAssignedMove.top() == 777.777) cout << "Test 11 (move assignment) - OK" << endl;
    else cout << "Test 11 (move assignment) - FAILED" << endl;

    if (doubleStackAssignedCopy.isEmpty()) cout << "Test 12 (empty after move assignment) - OK" << endl;
    else cout << "Test 12 (empty after move assignment) - FAILED" << endl;

    cout << "\n==================================\n" << endl;
}

void testOfWorkingWithString() {
    cout << "Testing of working with string \n" << endl;
    Stack<string> stringStack;

    stringStack.push("abc");
    if (stringStack.top() == "abc") cout << "Test 1 (push) - OK" << endl;
    else cout << "Test 1 (push) - FAILED" << endl;

    stringStack.push("def");
    if (stringStack.top() == "def") cout << "Test 2 (push) - OK" << endl;
    else cout << "Test 2 (push) - FAILED" << endl;

    stringStack.push("ghi");
    if (stringStack.top() == "ghi") cout << "Test 3 (push) - OK" << endl;
    else cout << "Test 3 (push) - FAILED" << endl;

    stringStack.pop();
    if (stringStack.top() == "def") cout << "Test 4 (pop) - OK" << endl;
    else cout << "Test 4 (pop) - FAILED" << endl;

    stringStack.pop();
    if (stringStack.top() == "abc") cout << "Test 5 (pop) - OK" << endl;
    else cout << "Test 5 (pop) - FAILED" << endl;

    stringStack.pop();
    if (stringStack.isEmpty()) cout << "Test 6 (empty stack) - OK" << endl;
    else cout << "Test 6 (empty stack) - FAILED" << endl;

    stringStack.push("abc");
    stringStack.push("def");
    stringStack.push("ghi");

    Stack<string> stringStackCopy = stringStack;
    if (stringStackCopy.top() == "ghi") cout << "Test 7 (copy constructor) - OK" << endl;
    else cout << "Test 7 (copy constructor) - FAILED" << endl;

    Stack<string> stringStackMove = std::move(stringStack);
    if (stringStackMove.top() == "ghi") cout << "Test 8 (move constructor) - OK" << endl;
    else cout << "Test 8 (move constructor) - FAILED" << endl;

    if (stringStack.isEmpty()) cout << "Test 9 (empty after moving) - OK" << endl;
    else cout << "Test 9 (empty after moving) - FAILED" << endl;

    stringStackCopy.push("zzzzzz");
    Stack<string> stringStackAssignedCopy;
    stringStackAssignedCopy = stringStackCopy;
    if (stringStackAssignedCopy.top() == "zzzzzz") cout << "Test 10 (copy assignment) - OK" << endl;
    else cout << "Test 10 (copy assignment) - FAILED" << endl;

    Stack<string> stringStackAssignedMove;
    stringStackAssignedMove = std::move(stringStackAssignedCopy);
    if (stringStackAssignedMove.top() == "zzzzzz") cout << "Test 11 (move assignment) - OK" << endl;
    else cout << "Test 11 (move assignment) - FAILED" << endl;

    if (stringStackAssignedCopy.isEmpty()) cout << "Test 12 (empty after move assignment) - OK" << endl;
    else cout << "Test 12 (empty after move assignment) - FAILED" << endl;

    cout << "\n==================================\n" << endl;
}

int main() {
    testOfWorkingWithInt();
    testOfWorkingWithDouble();
    testOfWorkingWithString();
}

