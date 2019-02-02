
#ifndef REFLECTOR_H_
#define REFLECTOR_H_

#include <vector>
//Original wiring from 1930
const std::vector<int> reflectorWiring = {24, 17, 20, 7, 16, 18, 11, 3, 15, 23, 13, 6, 14, 10, 12, 8, 4, 1, 5, 25, 2, 22, 21, 9, 0, 19};

int reflectorConvertLetter(int letterToConvert);
#endif  // REFLECTOR_H_