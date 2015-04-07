.PHONY: clean

stack: main.o stack.o
	gcc $^ -o $@


clean:
	rm -rf stack *.o
