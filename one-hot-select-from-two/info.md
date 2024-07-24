# Performance Issue

The best code should produce two basic block for each block of the `if`. However, on LLVM main, it produce every ternary operation as a basic block.

# Affacted LLVM commits

Unaffacted LLVM release versions: 14, 15, 16, 17, 18
Affacted LLVM release versions: 19

Since [56b3222b79632a4bbb36271735556a03b2504791](https://github.com/llvm/llvm-project/commit/56b3222b79632a4bbb36271735556a03b2504791)

Opened PR [#100293](https://github.com/llvm/llvm-project/issues/100293)
