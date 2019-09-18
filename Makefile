# /***********************************
# *                                 *
# *         Davey Anguiano          *
# *            CS 240               *
# *     Homework #1 (Makefile)      *
# *         Sept 12, 2019           *
# *                                 *
# *            Makefile             *
# *                                 *
# ***********************************/

all: IO-bound CPU-bound

CPU-bound:
	gcc CPU-bound.c -o CPU-bound

IO-bound:
	gcc IO-bound.c -o IO-bound
