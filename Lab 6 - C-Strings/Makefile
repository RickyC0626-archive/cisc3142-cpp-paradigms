cstring: cstring_app.o cstring.o
	$(CXX) -o cstring cstring_app.o cstring.o

cstring_app.o: cstring_app.cpp cstring.h
	$(CXX) -c cstring_app.cpp

cstring.o: cstring.cpp cstring.h
	$(CXX) -c cstring.cpp

clean:
	rm *.o

clean-all:
	rm *.o cstring