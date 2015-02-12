#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

class Utils {
public:
	static bool explode(std::string s, char delim, std::vector<std::string>& res);
};

#endif