#****************************************
# Variables to control MakeFile operation

CXX = g++

#****************************************
# Targets needed to bring the executable up to date

main.o:main.cpp function.h File_IO.h Customer.h List.h
	$(CXX) -c $<
	
function.o:function.cpp function.h Customer.h List.h
	$(CXX) -c $<

File_IO.o:File_IO.cpp File_IO.h Customer.h List.h
	$(CXX) -c $<
	
Customer.o:Customer.cpp Customer.h List.h
	$(CXX) -c $<
	
List.o:List.cpp List.h
	$(CXX) -c $<
	
main:main.o function.o File_IO.o Customer.o List.o
	$(CXX) -o main main.o function.o File_IO.o Customer.o List.o

clean_main:
	rm main main.o function.o File_IO.o Customer.o List.o log.txt
	
test.o:test.cpp Customer.h List.h File_IO.h
	$(CXX) -c $<

test:test.o Customer.o List.o File_IO.o
	$(CXX) -c $<
	
clean_test:
	rm main main.o function.o File_IO.o Customer.o List.o log.txt testing.txt
