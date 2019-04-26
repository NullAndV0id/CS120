// Weapons header. Mostly handles the class definition for weapons.

class Weapon {

  public:

  std::string name;   // Name of the Weapon.
  std::string action; // Action, mostly used for text reasons. (i.e. "swing" or "shoot").
  
  int attack;         // The numeric attack value for the weapon.

  bool requires_ammo; // A boolean that determines whether or not the weapon needs ammo to be used.
  int ammo;           // Tracks ammo. Initalized to 0 in the 'load_weapon' function if not.

  Weapon() { // Non-Perameterized Constructor.
    
  }

  Weapon( int weapon_id ) { // Perameterized constructor loads weapon at "_Weapon Templates/#{weapon_id}"

    load_weapon( weapon_id ); 

  }

  void load_weapon( int weapon_id ) { // Function loads weapon at "_Weapon Templates/#{weapon_id}"

    std::vector<std::string> data = read_data( "_Weapon Templates/" + std::to_string( weapon_id ) );

    name = data[0];
    action = data[1];

    attack = std::stoi( data[2] );

    if ( data[3] == "true" ) {
      requires_ammo = true;
      ammo = std::stoi( data[4] );
    }

    else {
      requires_ammo = false;
      ammo = 0;
    }

  }

};