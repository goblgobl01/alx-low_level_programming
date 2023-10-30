#include "main.h"
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fd;
char buffer[letters];
ssize_t bytes_written;

fd = fopen(filename, "r");
if(fd == NULL)
	return(0);
while (fgets(buffer, letters, fd) != NULL){
}
if(buffer == NULL)
	return(0);
else
{
bytes_written = write(1, buffer, strlen(buffer));

if(bytes_written == -1)
	return(0);
}
return(strlen(buffer));
}
