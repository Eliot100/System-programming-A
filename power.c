
# include "myMath.h"
# define e 2.71828

double Pow(double x, int y) {
	double sum = 1;
	for (int i = 0; i < y; i++) {
		sum *= x;
	}
	return sum;
}

double Exp(int x) {
	double sum = 1;
	for (int i = 0; i < x; i++) {
		sum *= e;
	}
	return sum;
}

//double Exp(int x) {
//	double sum = 1;
//	for (int i = 0; i < x; i++) {
//		sum *= e;
//	}
//	return sum;
//}