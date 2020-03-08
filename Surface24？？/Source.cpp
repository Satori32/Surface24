#include <iostream>

#include "Surface24.h"

int main() {

	Surface24 S;
	S.ReSize(16, 16);

	std::size_t C = 0;
	for (std::size_t Y = 0; Y < S.Height(); Y++) {
		for (std::size_t X = 0; X<S.Width(); X++) {
			S.Index(X, Y) = MakeColor24(C++, 0, 0);
		}
	}

	WriteBitmap24("test.bmp", S);

	return 0;
}