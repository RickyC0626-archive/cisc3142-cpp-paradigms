simple: app.o
	${CXX} -o simple app.o

app.o: app.cpp Simple.h
	${CXX} -c app.cpp

clean:
	rm *.o

clean-all:
	rm *.o simple