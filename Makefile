#Zhiyi Chen 11/4 Commit1 
prog: driver.o IntArray.o
	g++ -o prog driver.o IntArray.o

driver.o: driver.o IntArray.o
	g++ -c driver.cpp

IntArray.o: IntArray.cpp IntArray.h
	g++ -c IntArray.cpp


clean:
	rm -f *.o prog 