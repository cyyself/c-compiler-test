struct a_struct {
    unsigned int value;
    unsigned int some_cond;
    /* selector A */
    unsigned int index;
    unsigned int value_0;
    unsigned int value_1;
    unsigned int value_2;
    unsigned int value_3;
    /* selector B */
    unsigned int value_0_b;
    unsigned int value_1_b;
    unsigned int value_2_b;
    unsigned int value_3_b;
    bool use_0;
    bool use_1;
    bool use_2;
    bool use_3;
};

void some_func(a_struct &a) {
    if (a.value) {
        /* Try remove this block */
        a.value = ( a.use_0 ? a.value_0_b : 0) | 
                  ( a.use_1 ? a.value_1_b : 0) | 
                  ( a.use_2 ? a.value_2_b : 0) | 
                  ( a.use_3 ? a.value_3_b : 0);
    }
    else {
        /* Try remove this block */
        a.value = ( 0U == a.index ? a.value_0  : 0) | 
                  ( 1U == a.index ? a.value_1  : 0) | 
                  ( 2U == a.index ? a.value_2  : 0) | 
                  ( 3U == a.index ? a.value_3  : 0);
    }
}