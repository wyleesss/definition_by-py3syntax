#include "py3syntax.h"
#include <iostream>
using namespace std;
int main() {
	import_random
	bool true_ = 0, false_;
	input(false_, "true/false'\n-> ")
	if (true_ == 1) print("that`s true!")
	elif(not false_ == 1) print("that`s false!")
	elif(true_ == 0 and false_ == 0) print("that`s false truth!")
	elif(true_ == 1 or false_ == 1) print("that`s" $ "truth false!")
	else print("impossible...")
 }
