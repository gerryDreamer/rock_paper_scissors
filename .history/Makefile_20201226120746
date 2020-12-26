rock: main.o rock.o
	g++ main.o rock.o -o rock
	
rock.o : rock.cpp rock.h
	g++ -c rock.cpp
	
main.o : main.cpp
	g++ -c main.cpp

clean:
	rm *.o rock
