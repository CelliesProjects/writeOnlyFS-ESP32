# writeOnlyFS-ESP32

Are you tired from waiting for unimportant data to be written to some storage medium?

Do you want to save money on storage hardware upgrades for useless data?

Does your storage medium seem to fill up faster with irrelevant data than before every time you upgrade?

## Wait no more! Pay no more! Never run out of storage!

Sounds too good to be true?

Research has shown that most data saved is rather unimportant and boring and will probably never be read again.
Exactly this common and widespread scenario is what the engineers at CelliesProjects had in mind when they started developing `writeOnlyFS-ESP32` so this tedious proces could be done more efficient.

`writeOnlyFS-ESP32` uses a WOM (Write-Only-Memory) implementation in software which is a real breakthrough technology now also available for IoT devices. By making some minor concessions on the saved data retention, previously unheard of transfer speed and storage capacity were made possible.

But useless data storage could be simplified even further by eliminating the bottleneck that is the tradiditional file and their structure. `writeOnlyFS-ESP32` gets rid of file handles, filenames and all their overhead and limitations.

Data is stored raw on `writeOnlyFS-ESP32`. No need to open or close files, just dump your irrelevant data in `writeOnlyFS-ESP32` and you're done! This approach also greatly simplifies coding effort needed, which is another win.

`writeOnlyFS-ESP32` was written for speed, capacity and ease of use in all possible scenarios.

`writeOnlyFS-ESP32` is released under a MIT license.

### Use case:

- Storing unimportant data.

### Example code:

```c++
#include <writeOnlyFS-ESP32.h>

writeOnlyFS wofs;

void setup() {
  float freeBytes = wofs.free();
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

```

### Advantages:

- #### Money saved.
Since `writeOnlyFS-ESP32` is software based you will save a lot of money on hardware solutions!
- #### Infinite capacity.
You will never run out of storage!
- #### High speed.
`WriteOnlyESP32` runs at incredible speed!
- #### No overhead.
All calls to `writeOnlyFS-ESP32` will be optimized away!
- #### Easy to integrate.
Just one header file to add!
- #### Compatibility.
Upgrades to `writeOnlyFS-ESP32` will always be compatible with previously written data!
- #### Portability.
`writeOnlyFS-ESP32` is developed for ESP32 mcu's but will happily run on most Arduino boards!
- #### No more drive formatting.
`writeOnlyFS-ESP32` storage is always-on and requires no special preparations!
- #### Extendable.
Multiple `writeOnlyFS-ESP32` storage instances can co-exist on a system if infinite capacity is not enough for you!
- #### Lowest price per GB of storage in the industry.
Since `writeOnlyFS-ESP32` is free (as in beer) no hardware based data storage system can beat this metric!

### Contra's:

- Data can not be retrieved.