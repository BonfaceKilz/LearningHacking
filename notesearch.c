#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "hacking.h"

#define FILENAME "/var/notes"

int print_notes(int, int, char *);
