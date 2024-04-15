
#define o compilador padrão
CXX = g++
#define as flags de compilação
CXXFLAGS = -O2

input = calculadora.cpp main.cpp

#lista de objetos criados
output = calculadora.o main.o

final_result = calculadora.o main.o calculadora

compile: $(input)
	$(CXX) $(CXXFLAGS) -c calculadora.o calculadora.cpp
	$(CXX) $(CXXFLAGS) -c main.o main.cpp

link: $(output)
	$(CXX) $(output) -o calculadora

install: compile link

clean: $(final_result)
	@rm ./*.o calculadora