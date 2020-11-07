CC = g++
AR = ar  
libapi:api.cc
	$(CC) -c api.cc -I./
	$(AR) rcs libapi.a api.o
libuse_api:use_api.cc
	$(CC) -c use_api.cc -I./
	$(AR) rsc libuse_api.a use_api.o
main:main.cc
	$(CC) -o main main.cc -I./ -L./ -luse_api -lapi
.PHONY : clean all
all:libapi libuse_api main
clean:
	rm -f libapi.a libuse_api.a main
