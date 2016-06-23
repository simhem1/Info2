/*
 * reverse_quick_sort.cpp
 *
 *  Created on: 08.06.2016
 *      Author: Simon Hemmerich
 */

#include "reverse_quick_sort.hpp"
#define SWAP(a,b){int t; t=a; a=b; b=t;}

template<typename T>
bool smaller(const T& a, const T& b){
    return a<b;
}
///Muss man noch umdrehen!!!

/*template<typename T>
void reverse_quick_sort(std::vector<Orange>* oranges, int left, int right){
    int l=left, r=right;
    std::vector<Orange> mid=oranges[(left+right)/2];
    do{
        while(smaller(oranges[l],mid))
            ++l;
        while(smaller(mid,oranges[r]))
            --r;
        if(l<r)
            SWAP(l,r);
        if(l<=r){
            ++l;
            ++r;
        }
    } while(l<=r);
    if(left<r)
        reverse_quick_sort(oranges, left, r);
    if(l<right)
        reverse_quick_sort(oranges, l, right);
}*/

