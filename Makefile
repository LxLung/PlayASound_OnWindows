CXX=g++
INCLUDE=-lwinmm
Build: sound.cpp
	$(CXX) sound.cpp -o sound $(INCLUDE)
	./sound
