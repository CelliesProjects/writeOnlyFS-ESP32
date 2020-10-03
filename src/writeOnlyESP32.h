#ifndef __WRITEONLY_ESP32__
#define __WRITEONLY_ESP32__

class writeOnlyFS {
public:
  writeOnlyFS(){};
  ~writeOnlyFS(){};
  bool write(void* data){return true;};
  bool write(String data){return true;};
  bool write(char* data){return true;};
  bool write(int data){return true;};
  bool write(uint8_t data){return true;};
  bool write(uint16_t data){return true;};
  bool write(uint32_t data){return true;};
  bool write(uint64_t data){return true;};
  bool write(float data){return true;};
  bool write(double data){return true;};
  const double free(){return std::numeric_limits<double>::infinity();};
};
#endif
