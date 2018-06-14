# Makefle for assignment
#  we don't really need a makefile, because 'make stats' and the default
#  make rules will build the assignment, however eventucally we will need
# to change the compiler and options to get it running on the target machine.
CFLAGS = -Wall

stats: stats.c stats.h
