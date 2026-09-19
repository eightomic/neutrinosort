# NeutrinoSort

[![NeutrinoSort](neutrinosort.jpg)](https://github.com/eightomic/neutrinosort)

## Table of Contents

- [Introduction](README.md?tab=readme-ov-file#introduction)
- [Author](README.md?tab=readme-ov-file#author)
- [License](README.md?tab=readme-ov-file#license)
- [Implementation](README.md?tab=readme-ov-file#implementation)

## Introduction

NeutrinoSort is the efficient stable sorting algorithm that has low-footprint implementation (efficient memory usage and small code size), no division/modulus/multiplication operators and ultra-fast speed.

## Author

NeutrinoSort was created by William Stafford Parsons as a product of [Eightomic](https://eightomic.com).

## License

NeutrinoSort is licensed with [BSD-3-Clause](LICENSE).

## Implementation

Each mention of NeutrinoSort refers to each of the 3 following variants individually (`neutrinosort_small`, `neutrinosort_medium` and `neutrinosort_large`) implemented in C.

[neutrinosort.c](neutrinosort.c)

The `neutrinosort_small` function sorts (in stable ascending integral order) an `elements` array of `elements_length` elements.

The integral type of each element in `elements` must match the integral type of `element`.

`neutrinosort_medium` and `neutrinosort_large` aren't ready to publish yet.
