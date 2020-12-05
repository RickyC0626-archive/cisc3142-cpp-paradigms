mystring: mystring_app.o mystring.o
	$(CXX) -o mystring mystring_app.o mystring.o

mystring_app.o: mystring_app.cpp mystring.h
	$(CXX) -c mystring_app.cpp

mystring.o: mystring.cpp mystring.h mystring_exception.h
	$(CXX) -c mystring.cpp

clean:
	rm *.o

clean-all:
	rm *.o mystring