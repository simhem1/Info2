/*
 * Binary_heap.hpp
 *
 *  Created on: 09.06.2016
 *      Author: Simon Hemmerich
 */

#ifndef U4_A2_BINARY_HEAP_HPP_
#define U4_A2_BINARY_HEAP_HPP_


class Binary_heap
 {
 private:
  std::vector<Apple> content;
//  int N;

 public:
  Binary_heap();
  bool is_empty();
  void insert(Apple a);
  Apple del_max();

 private:
  void swim(int k);
  void sink(int k);
  void exch(int i, int j);
 };




#endif /* U4_A2_BINARY_HEAP_HPP_ */
