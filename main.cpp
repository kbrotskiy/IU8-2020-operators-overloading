#include <iostream>
#include <fstream>
#include <string>
#include "Vector.h"

using namespace std;

int main() {
	Vector vector1;
	Vector vector2;

	ifstream input1("input1.txt");

	if (input1.is_open()) {
		input1 >> vector1;
	}
	input1.close();

	ifstream input2("input2.txt");
	if (input2.is_open()) {
		input2 >> vector2;
	}
	input2.close();

	ofstream output("output.txt", fstream::out);

	output << "vector1: " << vector1 << endl;
	output << "vector2: " << vector2 << endl;
	output << endl;

	output << "Vector vector3 = vector1 ^ vector2" << endl;
	Vector vector3 = vector1 ^ vector2;
	output << "vector1: " << vector1 << endl;
	output << "vector2: " << vector2 << endl;
	output << "vector3: " << vector3 << endl;
	output << endl;


	output << "Vector vector4 = vector1" << endl;
	Vector vector4 = vector1;
	output << "vector1: " << vector1 << endl;
	output << "vector2: " << vector2 << endl;
	output << "vector4: " << vector4 << endl;
	output << endl;

	output << "Vector vector5 = move(vector2)" << endl;
	Vector vector5 = move(vector2);
	output << "vector1: " << vector1 << endl;
	output << "vector2: " << vector2 << endl;
	output << "vector5: " << vector5 << endl;
	output << endl;

	output.close();

	system("pause");
	return 0;
}