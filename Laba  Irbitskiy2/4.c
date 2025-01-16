/*
#define NOT_ENOUGH_ARGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void substring_files(const char* substring, int numfiles, ...) {

    va_list args;
    va_start(args, numfiles);

    for (int i = 0; i < numfiles; i++) {
        char* file_name = va_arg(args, char*);
        FILE* file = fopen(file_name, "r");

        if (file == NULL) {
            printf(stderr, "Error open file: %s\n", file_name);
            continue;
        }

        int line_num = 1;
        char line[1024];
        int char_index = 1;
        int substring_len = 0;
        const char* p = substring;
        while (*p != '\0') {
            substring_len++;
            p++;
        }

        while (fgets(line, sizeof(line), file) != NULL) {
            int line_len = 0;
            char* q = line;
            while (*q != '\0' && *q != '\n') {
                line_len++;
                q++;
            }

            int found = 0;
            for (int j = 0; j <= line_len - substring_len; ++j) {
                int k = 0;
                while (k < substring_len && line[j + k] == substring[k]) {
                    k++;
                }
                if (k == substring_len) {
                    printf("File: %s, Line : %d, Position : % d\n", file_name, line_num, char_index + j);
                    found = 1;
                }
            }
            if (found) {
                char_index += line_len + 1;
            }
            line_num++;
            char_index = 1;

        }

        fclose(file);
    }
    va_end(args);
}

int main() {

    char* substring = "test";
    substring_files(substring, 2, "file1.txt", "file2.txt");


    char* empty_substring = "";
    substring_files(empty_substring, 1, "file1.txt");

    return 0;
}

*/