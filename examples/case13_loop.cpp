#include <iostream>

static uint64_t rdtsc() 
{
  uint64_t a = 0, d = 0;
  asm volatile("mfence");
  asm volatile("rdtsc" : "=a"(a), "=d"(d)); //address: 0x117e
  a = (d << 32) | a;
  asm volatile("mfence");
  return a;
}

void case13_loop()
{
    static int k = 0;
    long time = 0;

    for (int i = 0; i < 3; i++)
    {
        time += rdtsc();
        k++;
    }

    std::cout << "time: " << time << std::endl;
}

int main()
{
}