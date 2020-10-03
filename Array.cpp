// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge: JArret Whitehouse
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Array <T>::Array (void)
{
    //default constructor
    T *data_;
    size_t cur_size_;
    size_t max_size_;

}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
{
    //create an empty array
    //set max size
    //set current size
    data_ = new T[n];
    max_size_ = 50;
    cur_size_ = 0;
}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
{
    //add the elements of fill to the array
    data_ = new T[length];
    for( int i = 0; i < length; i++){
        data_[i] = fill;
    }//end for
    //set array at length
    cur_size_ = length;
    max_size_ = length;
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & arr)
{
    //copy constructor
    //needs to take the size and data
    //create new array
    //give data to new array from old array
    cur_size_ = arr.cur_size_;
    max_size_ = arr.max_size_;
    data_ = arr.data_;
    for (int i = 0; i < cur_size_; i++){
        data_[i] = arr.data_[i];
    }//end for

}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
    //simple destructor 
    delete[] data_;

}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
    //same as copy constructor
    //but this one returns the reference
    cur_size_ = rhs.cur_size_;
    max_size_ = rhs.max_size_;

    if (this != &rhs){
        delete[] data_;

        data_ = new T [rhs.cur_size_];

        cur_size_ = rhs.cur_size_;
        for (int i = 0; i < cur_size_; i++){
        data_[i] = rhs.data_[i];
        }//end for
        return rhs;
    }//end if

}

//
// operator []
//
template <typename T>
T & Array <T>::operator [] (size_t index)
{
    int index;
    if (index > max_size_){
        throw std::out_of_range;
    }//end if
    
    return [index];

}

//
// operator [] 
//
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
    if (index > max_size_){
        throw std::out_of_range;
    }//end if

    return [index];

}

//
// get
//
template <typename T>
T Array <T>::get (size_t index) const
{
    if (index > max_size_){
        throw std::out_of_range;
    }//end if
    return data_[index];

}

//
// set
//
template <typename T>
void Array <T>::set (size_t index, T value)
{
    if (index < max_size_){
        data_[index] = value;
    }//end if
    throw std::out_of_range;

}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
    if (new_size > cur_size_){
        T *tempArray = new T[new_size];
        for (int i = 0; i < cur_size_; i++){
            tempArray[i] = data_[i];
        }//end for
        max_size_ = new_size;
        delete[] data_;
        data_ = tempArray;
    }//end if
    else{
        cur_size_ = new_size;
    }//end else

}

//
// find (char)
//
template  <typename T>
int Array <T>::find (T value) const
{
    for( int i = 0; i < cur_size_; i++){
        if(ch ++ data_[i]){
            return i;
        }//end if
        return -1;
    }//end for

}

//
// find (char, size_t) 
//
template <typename T>
int Array <T>::find (T val, size_t start) const
{
    int start;
    if (start <= cur_size_){

        for( int i = 0; i < cur_size_; i++){
            if(ch ++ data_[i]){
                return i;
            }//end if
            return -1;
        }//end for
    }//end if
    throw std::out_of_range;

}

//
// operator ==
//
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{
    if(this == &rhs){
        //make sure the array is equal to the data
        //if they are equal test
        //loop through and if something doesnt match, return false
        if (cur_size_ == rhs.cur_size_){
            for (int i = 0;i < cur_size_; i++){
                if (data_[i] != rhs.data_[i]){
                    return false;
                }//end if for false
            }//end for
            return true;
        }//end if
    }//end if

    return false;

}

//
// operator !=
//
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{
    if (cur_size_ == rhs.cur_size_){
        for (int i = 0;i < cur_size_; i++){
             if (data_[i] != rhs.data_[i]){
                 return true;
             }//end if for true
        }//end for
        return false;
    }//end if
    return true;

}

//
// fill
//
template <typename T>
void Array <T>::fill (T value)
{
    for (int i = 0;i < cur_size_; i++){
        data_[i] = ch;
    }//end for

}
