reverse: app.o
	${CXX} -o reverse app.o

app.o: app.cpp reverse.h
	${CXX} -c app.cpp

clean:
	rm *.o

clean-all:
	rm *.o reverse