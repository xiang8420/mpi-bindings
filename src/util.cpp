#include <iostream>
#include <cstdint>

extern "C" {

void anydsl_print_i16(int16_t s)  { std::cout << s; }
void anydsl_print_i32(int32_t i)  { std::cout << i; }
void anydsl_print_i64(int64_t l)  { std::cout << l; }
void anydsl_print_f32(float f)    { std::cout << f; }
void anydsl_print_f64(double d)   { std::cout << d; }
void anydsl_print_char(char c)    { std::cout << c; }
void anydsl_print_string(char* s) { std::cout << s; }
void anydsl_print_flush()         { std::cout << std::flush; }

}
