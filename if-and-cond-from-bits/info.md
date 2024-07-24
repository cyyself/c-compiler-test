# Performance Issue

Added more branch instructions when the first condtional is false after LLVM commit [b5a9361c90ca43c715780ab4f7422fbc9d3a067b](https://github.com/cyyself/llvm-project/commit/b5a9361c90ca43c715780ab4f7422fbc9d3a067b), shows poor performance on mispredicted branch. Especially on Verilator generated C++ codes.

# Affacted LLVM commits

Affacted released versions: 16, 17, 18, 19

Since [b5a9361c90ca43c715780ab4f7422fbc9d3a067b](https://github.com/cyyself/llvm-project/commit/b5a9361c90ca43c715780ab4f7422fbc9d3a067b)

Haven't been resolved now. Opened Issue [#99835](https://github.com/llvm/llvm-project/issues/99835)

# Workaround

Add `-mllvm --jump-is-expensive` to CXXFLAGS.
