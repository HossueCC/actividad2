// =================================================================
//
// File: selection.h
// Author: Pedro Perez
// Description: This file contains the implementation of the
//				bubble sort.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef SELECTION_H
#define SELECTION_H

#include "header.h"
#include <vector>


// =================================================================
// Performs the selection sort algorithm on a vector.
//
// @param A, a vector of T elements.
// =================================================================
template <class T>
void selectionSort(std::vector<T> &v) {
	int pos; 
	int sel;

	for(int i = v.size() - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(v[j] > v[pos]){
				pos = j;
			}
		}

		if (pos != i){
			swap(v, i, pos);
			sel++;
		}
	} return sel; 
}

#endif /* SELECTION_H */
