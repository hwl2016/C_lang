// #include "stdafx.h"
#include "stdio.h"
#include "fstream"

// C语言实现
void trace(char* s) {
    printf("%s\n", s);
}

// C++实现
class Trace {
    public:
    Trace() {
        flag = 0;
        f = stdout;
    }
    Trace(FILE* ff) {
        flag = 0;
        f = ff;
    }
    void on() {
        flag = 1;
    }
    void off() {
        flag = 0;
    }
    void print(char* s) {
        if(flag) {
            fprintf(f, "%s\n", s);
        }else {
            printf("off...");
        }
    }
    private:
    int flag;
    FILE* f;
};

int main(){
    // trace("Hello, World");

    FILE* f;
    fopen_s(&f, "demo01.txt", "w");
    Trace t(f);
    t.on();
    t.print("Hello\n");
    t.off();
    t.print("World\n");
    fclose(f);

    // std::ofstream outfile;
    // outfile.open ("test.txt");
    // outfile.write ("This is an apple", 16);
    // long pos = outfile.tellp();
    // outfile.seekp (pos-7);
    // outfile.write (" sam",4);
    // outfile.close();

    return 0;
}