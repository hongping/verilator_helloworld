#include <verilated.h>

#include <Vtop.h>

int main(int argc, char** argv, char**env) {
  if (0 && argc && argv && env) {}

  Vtop* top = new Vtop;
  while (!Verilated::gotFinish()) {
    top->eval();
  }

  top->final();

  delete top;

  exit(0);
}

