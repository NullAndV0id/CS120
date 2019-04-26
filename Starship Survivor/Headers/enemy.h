class Enemy {

  public:

  std::string name;
  std::string examine_flavor_text;

  Stats stats;

  Enemy() {

  }

  void load_enemy( std::string filepath ) {

    std::vector<std::string> data = read_data( filepath );

    name = data[0];
    examine_flavor_text = data[1];

    stats.load_stats( std::stoi( data[2] ) , std::stoi( data[3] ) , std::stoi( data[4] ) , std::stoi( data[5] ) , std::stoi( data[6] ) );

  }

  void change_health(int diff) {
    stats.current_hp -= diff;
  }

};