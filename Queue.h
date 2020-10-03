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

template <typename T>
class Queue
{
public:
    typedef T type;

    /// Default Constructor.
    Queue (void);

    /// Copy Constructor.
    Queue (const Queue & q);

    /// Destructor.
    ~Queue (void);

    /// Assignment Operator
    const Queue & operator = (const Queue & rhs);

    void enqueue(T element);

    T dequeue();

    boolean is_empty();

    size_t size();

    void clear();




}