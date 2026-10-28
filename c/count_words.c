#include <assert.h>
#include <ctype.h>
#include <stdio.h>

static int count_words(const char *s) {
    int count = 0, in_word = 0;
    for (; *s; s++) {
        if (isspace((unsigned char)*s)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    return count;
}

int main(void) {
    assert(count_words("hello world") == 2);
    assert(count_words("  many   spaces here ") == 3);
    assert(count_words("") == 0);
    printf("words: %d\n", count_words("C is fun to learn"));
    return 0;
}
