#include "score.h"		// user defined header file
						// main function only sketches out the logic of program
int main() {
	int scores[MAX], marks[MAX];
	int statistics[6] = {0};		//holding how many students have got mark 0, 1, ..., 5
	int m[30] = {0};
	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics, scores);
	output_results(marks, statistics, scores);
}
