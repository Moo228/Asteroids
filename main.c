#include "spaceship.h"

int main() {
  // Test the spaceship code.
  spaceship_init();
  spaceship_runtest();
  spaceship_drawShip();
}

// Interrupt routine
void isr_function() {
  // Empty for flag method (flag set elsewhere)
}