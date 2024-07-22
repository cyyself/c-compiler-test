struct a_struct {
    bool b_1, b_2, b_3;
    unsigned int cv_1, cv_2, cv_3;
    unsigned int cav_1, cav_2, cav_3;
    unsigned int d;
};

void some_func(a_struct &a) {
    if (a.b_1 & (8U == (0x1f & a.cv_1))) [[unlikely]] {
        a.d = a.cav_1;
    }
    else if (a.b_2 & (7U == (0x1f & a.cv_2))) [[unlikely]] {
        a.d = a.cav_2 ;
    }
    else if (a.b_3 & (6U == (0x1f & a.cv_3))) [[unlikely]] {
        a.d = a.cav_3;
    }
}
