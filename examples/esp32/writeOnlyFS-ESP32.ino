#include <writeOnlyESP32.h>

writeOnlyFS wofs;

void setup() {
  double freeBytes = wofs.free();
  ESP_LOGI(TAG, "Bytes free on writeOnlyFS: %f", freeBytes);
}

void loop() {
  wofs.write("Some unimportant string");

  /* A not so important number */
  wofs.write(42);

  /* A really completely useless number */
  wofs.write(23.01);

  /* A really unimportant string */
  wofs.write("Will I ever need this again? NO!");
}
