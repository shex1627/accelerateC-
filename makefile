CC=g++
CFLAG = -I.
DEPS = median.h Student_info.h grade.h

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

grading: grading.o median.o Student_info.o grade.o
	g++ -o grading grading.o median.o Student_info.o grade.o -I.


