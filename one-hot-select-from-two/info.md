# Performance Issue

The best code should produce two basic block for each block of the `if`. However, on LLVM main, it produce every ternary operation as a basic block.

# Affacted LLVM commits

Unaffacted LLVM release versions: 14, 15, 16, 17, 18

Known LLVM failed commit: [da0c8b275564f814a53a5c19497669ae2d99538d](https://github.com/cyyself/llvm-project/commit/d4b28fb7516c5a5ecded4154c207288da1949a6b)
