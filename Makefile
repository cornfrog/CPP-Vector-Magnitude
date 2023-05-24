all:
	@g++ v_mag.cpp -o vector_mag
	@./vector_mag

clean:
	@rm vector_mag