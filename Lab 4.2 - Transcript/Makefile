app: app.o student.o
	$(CXX) -o app app.o student.o

app.o: app.cpp student.h
	$(CXX) -c app.cpp

student.o: student.cpp student.h course.h
	$(CXX) -c student.cpp

clean:
	rm *.o

clean-all:
	rm *.o app