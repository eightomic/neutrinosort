# NeutrinoSort

[![NeutrinoSort](neutrinosort.jpg)](https://github.com/eightomic/neutrinosort)

NeutrinoSort (as a proprietary, source-available product of [Eightomic](https://eightomic.com)) is the fast efficient stable sort that has low-footprint implementation (efficient memory usage and small code size), no division/modulus/multiplication operators, no recursion and ultra-fast speed (relative to the aforementioned constraints).

Each mention of NeutrinoSort refers to both of the following variants individually (`neutrinosort_small` and `neutrinosort_large`) implemented in C.

[neutrinosort.c](neutrinosort.c)

The `neutrinosort_small` function sorts (in stable ascending integral order) an `elements` array of `elements_length` elements.

The integral type of each element in `elements` must match the integral type of `element`.

`neutrinosort_large` isn't ready to publish yet.
