OBJ = main.o sound.o
APPNAME = sound.a

#link rule
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
#conpiling rule
%.o : %.c
	gcc -c -o $@ $<

clean: 
	rm $(OBJ) $(APPNAME)

tar:
	tar cf project.tar *
