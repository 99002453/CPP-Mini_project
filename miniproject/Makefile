all: all.out 
all.out : Food.o cereal.o Nutrition.o cereal-test.o Nutrition-test.o 
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
Nutrition-test.o:Nutrition-test.cpp Nutrition.h Food.h cereal.h 
	g++ $< -c	
cereal-test.o: cereal-test.cpp Food.h cereal.h
	g++ $< -c
Nutrition.o : Nutrition.cpp Nutrition.h cereal.h Food.h
	g++ $< -c
cereal.o : cereal.cpp cereal.h Food.h
	g++ $< -c    
Food.o : Food.cpp Food.h
	g++ $< -c
clean:
	rm -rf *.o *.out
