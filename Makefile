all: all.out 
all.out : Food.o cereal.o Nutrition.o trip-test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread

trip-test.o: trip-test.cpp Food.h cereal.h
	g++ $< -c
Nutrition.o : Nutrition.cpp Nutrition.h cereal.h Food.h
	g++ $< -c
cereal.o : cereal.cpp cereal.h Food.h
	g++ $< -c    
Food.o : Food.cpp Food.h
	g++ $< -c
clean:
	rm -rf *.o *.out
