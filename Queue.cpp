// -*- C++ -*-
// $Id: Stack.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge: Jarret Whitehouse
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

// queue
template <typename T>
Queue <T>::Queue (void)
{
    Queue <T> queueData;
    Queue <T> firstInQueue;
}

// queue 
template <typename T>
Queue <T>::Queue (const Queue & queue)
{
    firstInQueue = queue.firstInQueue;
    queuedata = queue.queueData;

    for (int i = 0; i < queuedata; i++){
        queueData[i] = queue.queueData
    }//end for
}

// ~Queue
template <typename T>
Queue <T>::~Queue (void)
{
    delete[] queueData;
}

// Operator =
template <typename T>
const Queue <T> & Queue <T>::operator = (const queue & rhs)
{
    queueSize = rhs.queueSize;

    if(this != &rhs){
        delete[] queueData;

        queueData = new T [rhs.queueSize];

        queueSize = rhs.queueSize;
        for (int i = 0; i < size; i++){
        queueData[i] = rhs.queueData[i];
        }//end for
        return rhs;
    }//end if
}

// enqueue
template <typename T>
void Queue <T>::enqueue(T element)
{
    //not correct, need to fix
    queueData++;
    Queue[element];

}

//dequeue
template <typename T>
Queue <T>::dequeue()
{
    //check if queue is empty
    //if not, take index 0 and remove it
    //if so throw exception
    if (queueData != null){
        firstInQueue = Queue[0];
        delete[] firstInQueue;

    }
    throw empty_exception();

}

//is_empty
template <typename T>
Queue <T>::boolean is_empty()
{
    //check if queue is empty 
    //if so, return true,
    //if not, return false
    if (queueData != null){
        return false;
    }//end if
    return true;
}

//size
template <typename T>
Queue <T>::size_t size()
{
    //return the size of the queue
    int queueNum = queueSize;
    return queueNum;
}

//clear
template <typename T>
void Queue <T>::clear()
{
    delete[] queueData;
}