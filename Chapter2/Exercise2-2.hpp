//
//  Pentagonal.hpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/2/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#ifndef Pentagonal_hpp
#define Pentagonal_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

const vector<int>* pentagonal_sequence(int size);
template <typename elementType>
void display_vector(vector<elementType> &sequence_vector, string sequence_type);
#endif /* Pentagonal_hpp */

