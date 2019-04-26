class Script {

    std::vector<std::string> text;
    std::vector<std::string> *text_ptr;

    Script() {
        text_ptr = &text;
    }

    void writeLine( std::string line ) {

        text_ptr->push_back(line);

    }

};