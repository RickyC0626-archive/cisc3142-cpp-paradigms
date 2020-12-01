tagsort: tagsort_app.o tagsort.o
	$(CXX) -o tagsort tagsort_app.o tagsort.o

tagsort_app.o: tagsort_app.cpp tagsort.h
	$(CXX) -c tagsort_app.cpp

tagsort.o: tagsort.cpp tagsort.h
	$(CXX) -c tagsort.cpp

clean:
	rm *.o

clean-all:
	rm *.o tagsort