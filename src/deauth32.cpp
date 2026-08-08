#include "deauth.h"
#include "definitions.h"

void deauth32() {
  enable_deauth();
}

void deauth32_loop() {
  deauth_loop();
}
