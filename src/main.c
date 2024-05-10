#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h> // For getopt

int main(int argc, char* argv[]) {
  int opt;
  char* directory = NULL;

  // Parse command-line options
  while ((opt = getopt(argc, argv, "d:")) != -1) {
    switch (opt) {
      case 'd':
        directory = optarg;
        break;
      default: // '?' case
        fprintf(stderr, "Usage: %s -d <directory>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
  }

  if (directory == NULL) {
    fprintf(stderr, "Missing -d option for directory specification.\n");
    fprintf(stderr, "Usage: %s -d <directory>\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  char cmd[65535];
  snprintf(cmd, sizeof(cmd),
       "mkdir -p %s && rm -rf %s/* && cp -r dat/* %s/",
       directory, directory, directory);
  system(cmd);

  return 0;
}
