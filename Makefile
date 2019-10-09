CC := gcc

all:
	$(CC) -O3 timesort.c -o timesort

clean:
	rm timesort
