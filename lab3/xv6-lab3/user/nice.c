#include "user/user.h"

int main (int argc, char *argv[]) {
    
    if (argc < 3 || argc > 3) {
        printf("Usage: nice <pid> <priority>");
        exit(1);
    }

    int pid = atoi(argv[1]);
    int priority = atoi(argv[2]);

    nice(pid, priority);

    exit(0);
}