CC=gcc

all: bench calibrate

bench: bench.c
	$(CC) bench.c -o bench

calibrate: calibrate.c
	$(CC) calibrate.c -o calibrate

clean:
	rm -rf *o bench calibrate
