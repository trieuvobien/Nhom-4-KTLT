#include <stdio.h>
#include <stdlib.h>

void removeComments(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");
    if (!in || !out) {
        printf("Không thể mở file!\n");
        return;
    }

    int c, prev = 0;
    int state = 0; // 0: NORMAL, 1: IN_BLOCK_COMMENT, 2: IN_LINE_COMMENT

    while ((c = fgetc(in)) != EOF) {
        if (state == 0) {
            if (prev == '/' && c == '*') {
                state = 1; // bắt đầu chú thích khối
                prev = 0;
                continue;
            } else if (prev == '/' && c == '/') {
                state = 2; // bắt đầu chú thích dòng
                prev = 0;
                continue;
            } else {
                if (prev) fputc(prev, out);
                if (c == '/') {
                    prev = '/';
                } else {
                    fputc(c, out);
                    prev = 0;
                }
            }
        } else if (state == 1) { // IN_BLOCK_COMMENT
            if (prev == '*' && c == '/') {
                state = 0;
                prev = 0;
            } else {
                prev = (c == '*') ? '*' : 0;
            }
        } else if (state == 2) { // IN_LINE_COMMENT
            if (c == '\n') {
                state = 0;
                fputc('\n', out);
            }
        }
    }
    if (prev && state == 0) fputc(prev, out);

    fclose(in);
    fclose(out);
}

int main() {
    removeComments("input.c", "output.c");
    printf("Đã xóa chú thích!\n");
    return 0;
}
