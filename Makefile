

all: Makefile repeatToLength.h test.cpp
	g++ -g test.cpp -o testRepeatToLength
	# gdb --args testRepeatToLength 20 'hello! '
	./testRepeatToLength 20 'hello there! '
