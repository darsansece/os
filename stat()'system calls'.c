 #include <stdio.h>
 #include <sys/stat.h>
 int main() {
    struct stat fileStat;
    if (stat("test.txt", &fileStat) < 0) {
        perror("stat");
        return 1;
    }
    printf("File Size: %ld bytes\n", fileStat.st_size);
    printf("Inode: %ld\n", fileStat.st_ino);
    printf("Permissions: %o\n", fileStat.st_mode & 0777);
    return 0;
 }
 
