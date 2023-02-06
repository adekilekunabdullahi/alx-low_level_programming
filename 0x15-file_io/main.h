#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
void copy_string(const char *file_from, const char *file_to);
#endif
