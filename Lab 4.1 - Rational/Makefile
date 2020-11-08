rational: rational_test.o rational.o
	$(CXX) -o rational rational_test.o rational.o

rational_test.o: rational_test.cpp rational.h rational_exception.h
	$(CXX) -c rational_test.cpp

rational.o: rational.cpp rational.h rational_exception.h gcd.h
	$(CXX) -c rational.cpp

clean:
	rm *.o

clean-all:
	rm *.o rational