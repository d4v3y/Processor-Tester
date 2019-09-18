all: IO-bound CPU-bound

CPU-bound:
	gcc CPU-bound.c -o CPU-bound

IO-bound:
	gcc IO-bound.c -o IO-bound
