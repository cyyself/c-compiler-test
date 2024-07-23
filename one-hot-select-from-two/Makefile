CXX := clang++
OBJDUMP := objdump

test.o: test.cpp
	$(CXX) -O3 -c -o $@ $<

test.ll: test.cpp
	$(CXX) $< -O3 -emit-llvm -S

.PHONY: clean check

clean:
	rm -f test.o test.ll

check:
	$(MAKE) clean
	$(MAKE) test.o
	test `$(OBJDUMP) -d test.o | grep j | wc -l` -lt 8
