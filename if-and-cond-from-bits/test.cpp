struct a_struct {
    bool a;
    unsigned int b;
    bool c;
    unsigned int d;
    unsigned int e;
    unsigned int f;
};

void some_func(a_struct &a) {
    if (a.a & (8U == (0x1f & a.b))) {
        a.d = a.e;
    }
    else if (a.c & (7U == (0x1f & a.b))) {
        a.d = a.e;
    }
    else if (a.c & (6U == (0x1f & a.b))) {
        a.d = a.f;
    }
}
