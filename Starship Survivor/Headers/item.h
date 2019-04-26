class Item {

  std::string name;
  std::string usage_text;
  void (*on_use)( Player player , std::vector<int> );
  int function_type;
  std::vector<int> perameters;

  Item() {

  }

};