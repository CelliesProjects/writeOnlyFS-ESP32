# writeOnlyESP32

Are you tired from waiting for unimportant data to be written to some storage medium?

Does your storage medium seem to fill up faster with irrelevant data than before every time you upgrade?

Do you want to save money on storage hardware upgrades?

## Wait no more! Pay no more! Never run out of storage!

Research has shown that most data saved is rather unimportant and will probably never be read again.
Exactly this scenario is what the engineers at CelliesProjects had in mind when they started developing `writeOnlyESP32`.

`writeOnlyESP32` was written for speed, capacity and ease of use in all possible scenarios.

`writeOnlyESP32` is released under a MIT license.

### Pro's:

- Infinite capacity. You will never run out of storage!
- High speed. `WriteOnlyESP32` runs at incredible speed!
- No overhead. All calls to `writeOnlyESP32` will be optimized away!
- Easy to use. Just one header file to add!
- Compatability. Upgrades to `writeOnlyESP32` will always be compatible with previously written data!
- Portability. `writeOnlyESP32` is developed for ESP32 mcu's but will happily run on most Arduino boards!

### Contra's:

- Data can not be retrieved.

### Use case:

- Storing unimportant data.

### Example code:

```c++
#include <writeOnlyESP32.h>

writeOnlyESP32 infinite_storage;

void setup() {
}

void loop() {
  infinite_storage.write("Some unimportant string");

  /* A not so important number */
  infinite_storage.write(42);

  /* A really unimportant string */
  infinite_storage.write("Will I ever need this again? NO!");
}

```
