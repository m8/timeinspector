#include <iostream>
#define NOINLINE __attribute__((noinline))

NOINLINE uint64_t rdtsc_func() 
{
  uint64_t a = 0, d = 0;
  asm volatile("mfence");
  asm volatile("rdtsc" : "=a"(a), "=d"(d)); 
  a = (d << 32) | a;
  asm volatile("mfence");
  return a;
}

unsigned long case_2_function()
{
    auto start = rdtsc_func();
    int t = 1;
    auto end = rdtsc_func();
    return end - start;
}

int main()
{
    int t = case_2_function();
    std::cout << "Time: " << t << std::endl;
}
