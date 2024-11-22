snake: snake.c
	gcc snake.c -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

clean:
	rm -f a.out