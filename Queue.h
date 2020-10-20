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

    /**
   * @class empty_exception
   *
   * Exception thrown to indicate the queue is empty.
   */
  class empty_exception : public std::exception
  {
  public:
    /// Default constructor.
    empty_exception (void)
      : std::exception () { }

    /**
     * Initializing constructor.
     *
     * @param[in]      msg         Error message.
     */
    empty_exception (const char * msg)
      : std::exception (msg) { }
  };

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

private:
    // COMMENT You are to use your array class here. This
    // will impact your source code, which makes it hard for
    // me to give anymore insights on potential design issues.
    
    // member variables

    //data in queue
    Queue <T> queueData;

    //first item in Queue
    Queue <T> firstInQueue;

    //size of queue
    Queue <T> queueSize;




}
