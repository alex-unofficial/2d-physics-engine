CXX = g++
CFLAGS = 
LDFLAGS = 

exec = exec

headers = $(wildcard *.h) 
obj = $(headers:.h=.o)

$(exec): main.o $(obj)
	$(CXX) $(CFLAGS) $^ $(LDFLAGS) -o $@

main.o: main.cpp $(headers) 
	$(CXX) -c main.cpp

$(obj): %.o: %.cpp %.h
	$(CXX) -c $<

clean:
	rm $(wildcard *.o) $(exec)

