//
// Created by pmrj on 16-01-2025.
//

#pragma once
#include <string>

class FormattedText {
    std::string plain_text;
    bool *caps;
    public:
    explicit FormattedText(const std::string &plain_text) : plain_text(plain_text) {
        caps = new bool[plain_text.length()];
    }

    ~FormattedText() {
        delete [] caps;
    }
};
