# writeOnlyFS-ESP32

Are you tired from waiting for unimportant data to be written to some storage medium?

Do you want to save money on storage hardware upgrades for useless data?

Does your storage medium seem to fill up faster with irrelevant every time you upgrade your hardware?

## Wait no more! Pay no more! Never run out of storage!

Sounds too good to be true?

Research has shown that most data saved is rather unimportant and boring and will probably never be read again.
Exactly this common and widespread scenario is what the engineers at CelliesProjects had in mind when they started developing `writeOnlyFS-ESP32` 

`writeOnlyFS-ESP32` is designed specifically so the tedious proces of storing boring data can be done more efficient and faster.

`writeOnlyFS-ESP32` uses a software based WOM (Write-Only-Memory) implementation which is a real breakthrough technology now also available for IoT devices. By making some minor concessions on the saved data retention, previously unheard of transfer speed and storage capacity were made possible.

But useless data storage can be simplified even further by eliminating the bottleneck that is the tradiditional file and file system structures. `writeOnlyFS-ESP32` gets rid of file handles, filenames, folders and all their overhead and limitations.

Data is stored raw on `writeOnlyFS-ESP32`. No need to open or close files, just dump your irrelevant data in `writeOnlyFS-ESP32` and it's gone! This approach also greatly simplifies coding effort needed, which is another win.

`writeOnlyFS-ESP32` was written for speed, capacity and ease of use in all possible scenarios.

`writeOnlyFS-ESP32` is released under a MIT license.

### Use case:

- Storing unimportant data.

### Example code:

```c++
#include <writeOnlyESP32.h>

writeOnlyFS wofs;

void setup() {
  double freeBytes = wofs.free();
  ESP_LOGI(Tag, "Bytes free on writeOnlyFS: %f", freeBytes);
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
<br>Depending on system resources, up to infinite instances of `writeOnlyFS-ESP32` on a single system should be possible.
<br>But 640 times infinity should be enough for everybody!
- #### Lowest price per GB of storage in the industry.
Since `writeOnlyFS-ESP32` is free (as in beer) no hardware based data storage system can beat this metric!

### Contra's:

- Data can not be retrieved.


#### This program is beerware.

Although I like to code, my afk time is equally important.
If you like the project, you could buy me a beer for some moral support.

[![paypal](https://www.paypalobjects.com/en_US/NL/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=3RV98BALWTEJS)

```
MIT License

Copyright (c) 2020 Cellie

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
