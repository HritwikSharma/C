#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

#define MAX_FILES 1000
#define MAX_PATH 1024

// Function to copy file from src to dest
int copy_file(const char *src_path, const char *dest_path) {
    FILE *src = fopen(src_path, "rb");
    if (!src) return -1;

    FILE *dest = fopen(dest_path, "wb");
    if (!dest) {
        fclose(src);
        return -1;
    }

    char buffer[8192];
    size_t bytes;
    while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        fwrite(buffer, 1, bytes, dest);
    }

    fclose(src);
    fclose(dest);
    return 0;
}

int main() {
    char source_dir[MAX_PATH] = "C:\\Users\\Hritwik\\Desktop\\2025";
    char folder1[MAX_PATH] = "C:\\Users\\Hritwik\\Desktop\\H";
    char folder2[MAX_PATH] = "C:\\Users\\Hritwik\\Desktop\\S";

    struct dirent *entry;
    DIR *dp;
    char *files[MAX_FILES];
    int count = 0;

    srand(time(NULL));

  

    // Open source directory
    dp = opendir(source_dir);
    if (!dp) {
        perror("Failed to open source directory");
        return 1;
    }

    // Read files from the source directory
    while ((entry = readdir(dp)) != NULL) {
        if (entry->d_type == DT_REG) { // Only regular files
            files[count] = strdup(entry->d_name);
            count++;
        }
    }
    closedir(dp);

    // Shuffle the file list
    for (int i = count - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char *temp = files[i];
        files[i] = files[j];
        files[j] = temp;
    }

    // Split files into two folders
    for (int i = 0; i < count; i++) {
        char src_path[MAX_PATH], dest_path[MAX_PATH];

        snprintf(src_path, sizeof(src_path), "%s/%s", source_dir, files[i]);

        if (i < count / 2) {
            snprintf(dest_path, sizeof(dest_path), "%s/%s", folder1, files[i]);
        } else {
            snprintf(dest_path, sizeof(dest_path), "%s/%s", folder2, files[i]);
        }

        if (copy_file(src_path, dest_path) != 0) {
            fprintf(stderr, "Failed to copy %s\n", files[i]);
        } else {
            printf("Copied %s -> %s\n", src_path, dest_path);
        }

        free(files[i]); // Clean up
    }

    return 0;
}

