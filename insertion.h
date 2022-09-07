// =================================================================
//
// File: insertion.h
// Author: Pedro Perez
// Description: This file contains the implementation of the
//				insertion sort.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef INSERTION_H
#define INSERTION_H

#include "header.h"
#include <vector>


// =================================================================
// Performs the insertion sort algorith on a vector.
//
// @param A, a vector of T elements.
// =================================================================
template <class T>
int insertionSort(std::vector<T> &v) {
	int insertion = 0;
	for(int i = 1; i < v.size(); i++){
		for(int j = i; j > 0 && v[j] < v[j - 1]; j--){
			swap(v, j, j - 1);
			insertion++;
		}
	}
	return insertion;
}

#endif /* INSERTION_H */
