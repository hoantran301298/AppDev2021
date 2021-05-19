// HEADER FILES (score.h)

// in a header file, usually we put following information
//		1. constant definitions
//		2. data structure definitions
//		3. function prototypes (declaration)

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 30

// we dont use complex data structure in this program

void input_scores(int []);
void evaluation(int [], int[]);
void classification(int[], int[], int[]);
void output_results(int[], int[], int s[]);
