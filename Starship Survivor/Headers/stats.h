// Stats header. Mostly handles the class definition for the statistics used by enemies
// and the player. Has a dependancy on the weapons header.

class Stats {

  public:

  Weapon weapon;

  int max_hp;
  int current_hp;
  int def;
  int spd;
  
  bool ne;

  Stats() {

  }

  Stats( int weapon_id , int health , int defense , int speed , bool night_eye ) {
    
    weapon.load_weapon( weapon_id );

    max_hp = health;
    current_hp = health;
    def = defense;
    spd = speed;
    
    ne = night_eye;

  }

  void load_stats( int weapon_id , int health , int defense , int speed , bool night_eye ) {

    weapon.load_weapon( weapon_id );

    max_hp = health;
    current_hp = health;
    def = defense;
    spd = speed;
    
    ne = night_eye;

  }

};