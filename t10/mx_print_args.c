void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if (argc < 1){
        return 0;
    }
    else {
        for (int i = 1; argv[i]; i++) {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
}
