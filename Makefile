EXENAME=banking_pt2
CXXFLAGS=-Wall -ansi -pedantic -ggdb
LFLAGS=
CXX=g++

SRCS:=$(wildcard *.cpp)
OBJS:=$(patsubst %.cpp,%.o,$(SRCS))
DEPS:=$(patsubst %.cpp,%.d,$(SRCS))

$(EXENAME): $(DEPS) $(OBJS)
	$(CXX) -o $(EXENAME) $(OBJS) $(LFLAGS)

%.d: %.cpp
	$(CXX) $(CXXFLAGS) -M $< > $@
#	$(CXX) $(CXXFLAGS) -M $< | sed s/\\.o/.d/ >> $@

#something.d: somthing.cpp
#<tab>$(CXX) $(CXXFLAGS) - M something.cpp > something.d

valgrind: $(EXENAME)
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./$(EXENAME)

clean:
	rm *.d *.o $(EXENAME)

-include $(DEPS)
