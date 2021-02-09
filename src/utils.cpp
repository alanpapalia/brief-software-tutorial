#include <iostream>

void f_3() { int c = 0; for (size_t i = 0; i < 1e9; i++) { if (c % 2 == 1) { c += 2; } else { c += 1; } } }
void f_2() { int c = 0; for (size_t i = 0; i < 1e8; i++) { if (c % 2 == 1) { c += 2; } else { c += 1; } } f_3(); }
void f_1() { int c = 0; for (size_t i = 0; i < 1e8; i++) { if (c % 2 == 1) { c += 2; } else { c += 1; } } f_2(); }
void function_stack_1() { int c = 0; for (size_t i = 0; i < 1e8; i++) { if (c % 2 == 1) { c += 2; } else { c += 1; } } }
void function_stack_2() { int c = 0; for (size_t i = 0; i < 1e8; i++) { if (c % 2 == 1) { c += 2; } else { c += 1; } } f_1(); }
