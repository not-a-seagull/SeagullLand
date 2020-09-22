// Apache 2.0 License

#ifndef SL_TILE_H
#define SL_TILE_H

#include "situation.h"

namespace SeagullLand {

enum TileType {
  None,
  Ocean,
  Deserts,
  Mountains,
  Forests,
  Plains
};

class Tile {
  private:
    bool has_river;
    TileType ty;
    std::optional<Situation> situation;
  public:
    Tile(): ty(TileType::None), has_river(false), situation() {} 

    inline bool has_river() const { return this->has_river; }
    inline TileType tile_type() const { return this->ty; }
    inline void set_has_river(bool val) { this->has_river = val; }
    inline void set_tile_type(TileType val) { this->ty = val; }
};

}

#endif // SL_TILE_H
