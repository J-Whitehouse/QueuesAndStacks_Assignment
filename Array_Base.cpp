//==============================================================================
/**
 * @file       Array_Base.h
 *
 * Honor Pledge: Jarret Whitehouse
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Array_Base.h"
#include <stdexcept>

//
// Array_Base
//
template <typename T>
Array_Base <T>::Array_Base (void)
{
    //default constructor
    T *data_;
    size_t cur_size_;
    size_t max_size_;

}

//
// Array_Base (size_t)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length)
{
    //create an empty array
    //set max size
    //set current size
    data_ = new T[n];
    max_size_ = 50;
    cur_size_ = 0;
}

//
// Array_Base (size_t, char)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length, T fill)
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
// Array_Base (const Array_Base &)
//
template <typename T>
Array_Base <T>::Array_Base (const Array_Base & arr)
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
// ~Array_Base
//
template <typename T>
Array_Base <T>::~Array_Base (void)
{
    //simple destructor 
    delete[] data_;

}

//
// operator =
//
template <typename T>
const Array_Base <T> & Array_Base <T>::operator = (const Array_Base & rhs)
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
// size
//
template <typename T>
const size_t size (void)
{
    return cur_size_;
}

//
// max_size
//
template <typename T>
const size_t max_size (void)
{
    return max_size_;
}

//
// operator []
//
template <typename T>
T & Array_Base <T>::operator [] (size_t index)
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
const T & Array_Base <T>::operator [] (size_t index) const
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
T Array_Base <T>::get (size_t index) const
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
void Array_Base <T>::set (size_t index, T value)
{
    if (index < max_size_){
        data_[index] = value;
    }//end if
    throw std::out_of_range;

}

//no resize, just for array

//
// find (char)
//
template  <typename T>
int Array_Base <T>::find (T value) const
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
int Array_Base <T>::find (T val, size_t start) const
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
bool Array_Base <T>::operator == (const Array_Base & rhs) const
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
bool Array_Base <T>::operator != (const Array_Base & rhs) const
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
void Array_Base <T>::fill (T value)
{
    for (int i = 0;i < cur_size_; i++){
        data_[i] = ch;
    }//end for

}