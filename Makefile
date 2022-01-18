# -*- MakeFile -*-

#target: dependencies
#	action

BINARY=bin
CODEDIRS=. lib
INCDIRS=. ./include/ #can be list

CC=gcc
OPT=-O0

#Generate files that encode make rules for the .h dependencies
DEPFLAGS=-MP -MD

#Automatically add the -I onto each include directory
CFLAGS=-Wall -Wextra -g $(foreach D,$(INCDIRS),-I$(D)) $(OPT) $(DEPFLAGS)

# For-style iteration (foreach) and regular expression completion (Wildcard)
CFILES=$(foreach D, $(CODEDIRS), $(wildcard $(D)/*.c))

# Regular expression replacement
OBJECTS=$(patsubst %.c, %.o, $(CFILES))
DEPFILES=$(patsubst %.c, %.d, $(CFILES))


all: $(BINARY)


$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^


# Regular Expression where % is a wildward
# Only want the .c file dependency here, thus $< instead of $^
%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(BINARY) $(OBJECTS) $(DEPFILES)

diff: 
	$(info The status of the repository, and the volume of pre-file changes:)
	@git status
	@git diff --stat

