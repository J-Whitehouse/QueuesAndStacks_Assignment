// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge: Jarret Whitehouse
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
{
    T *data_;
    size_t cur_size_ = N;
    size_t max_size_ = N;

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
{
    //copy constructor
    //needs to take the size and data
    //create new array
    //give data to new array from old array
	N = arr.N;
    data_ = arr.data_;
    for (int i = 0; i < N; i++){
        data_[i] = arr.data_[i];
    }//end for


}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
{
    //similar to last one
    //needs to use M as size 
    M = arr.cur_size_;
    M = arr.max_size_;
    data_ = arr.data_;
    for (int i = 0; i < M; i++){
        data_[i] = arr.data_[i];
    }//end for
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
{
    for (int i = 0;i < N; i++){
        data_[i] = fill;
    }//end for
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
    //simple destructor 
    delete[] data_;

}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
    N = rhs.cur_size_;

    if (this != &rhs){
        delete[] data_;

        data_ = new T [rhs.cur_size_];
        //not sure if that is supposed to be rhs.N

        cur_size_ = rhs.cur_size_;
        for (int i = 0; i < cur_size_; i++){
        data_[i] = rhs.data_[i];
        }//end for
        return rhs;
    }//end if
	
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
    //same as last except use M instead of N?
    M = rhs.cur_size_;

    if (this != &rhs){
        delete[] data_;

        data_ = new T [rhs.cur_size_];
        //not sure if that is supposed to be rhs.N

        cur_size_ = rhs.cur_size_;
        for (int i = 0; i < cur_size_; i++){
        data_[i] = rhs.data_[i];
        }//end for
        return rhs;
    }//end if

}
