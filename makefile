CXX = g++
CXXFLAGS = -Wall -g -std=c++11

src = $(wildcard kernel/*.cc) \

obj = $(src:.cc=.o)

exec: $(obj)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) exec
