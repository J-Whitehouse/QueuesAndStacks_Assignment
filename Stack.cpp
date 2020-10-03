// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge: Jarret Whitehouse
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
{
    Stack <T> stackData;
    Stack <T> topOfStack;

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
    //following structure for the arrays built previously

    topOfStack = stack.topOfStack;
    stackData = stack.stackData;

    for (int i = 0; i < stackData; i++){
        stackData[i] = stack.stackData[i];
    }//end for


}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
    delete[] stackData;

}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
    //add spot at front of stack
    //add element there
    topOfStack++;
    T[topOfStack] = element;

}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
    //take top off stack
    int top = T[topOfStack--];
    return top;

}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
    //using array as code base
    size = rhs.size;

    if(this != &rhs){
        delete[] stackData;

        stackData = new T [rhs.size];

        size = rhs.size;
        for (int i = 0; i < size; i++){
        stackData[i] = rhs.stackData[i];
        }//end for
        return rhs;
    }//end if


}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
    delete [stackData];

}

// am I suppsoed to create the missing methods?
// not sure because does not tell us to in the 
//report but explicitly tells us to make the queue