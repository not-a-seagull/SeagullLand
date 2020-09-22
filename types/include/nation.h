// Apache 2.0 License

#ifndef SL_NATION_H
#define SL_NATION_H

#include <string>

namespace SeagullLand {

//! An individual nation.
class Nation {
  private:
    std::string name;
  public:
    Nation(std::string name);
};

}

#endif // SL_NATION_H
