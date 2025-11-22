// NO #include!

// Deklarasi system call langsung
long write(int fd, const void *buf, unsigned long count);
void exit(int status);

// Fungsi strlen buatan sendiri
int str_len(const char *s) {
    int i = 0;
    while (s[i]) i++;
    return i;
}

// Fungsi print buatan sendiri
void print(const char *s) {
    write(1, s, str_len(s));
}

// Fungsi print angka
void print_number(int n) {
    if (n < 0) {
        print("-");
        n = -n;
    }
    
    if (n >= 10) {
        print_number(n / 10);
    }
    
    char digit = '0' + (n % 10);
    write(1, &digit, 1);
}

// Main program
int main() {
    print("Hello dari C tanpa library!\n");
    print("Angka: ");
    print_number(42);
    print("\n");
    
    return 0;
}