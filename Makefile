objs= MPI_conf.o main.o
libs=msmpi.lib
inc= include
target=AGEO.exe
.PHONY:all
all: AGEO

.PHONY:AGEO
AGEO: $(target)

$(target): main.o MPI_conf.o
	g++ -I$(inc) -o $(target) $(objs) $(libs)
%.o:%.cpp
	g++ -I$(inc) -o $@ -c $<

.PHONY:clean
clean:
	rm $(objs) $(target)