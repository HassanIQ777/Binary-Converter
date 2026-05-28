#include <bitset>
#include <iostream>
#include <sstream>
#include <string>

std::string textToBinary(std::string text) {
  std::string binary;
  for (const auto c : text) {
    binary += std::bitset<8>(c).to_string();
  }
  return binary;
}

std::string binaryToText(std::string binary) {
  std::string text;
  for (size_t i = 0; i < binary.size(); i += 8) {
    std::bitset<8> bits(binary.substr(i, 8));
    text += static_cast<char>(bits.to_ulong());
  }
  return text;
}

void cls() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

int main() {
  while (1) {
    std::string mode;
    std::cout << "Enter mode: [1/2] | q[uit]\n1. Binary -> Text\n2. Text   -> "
                 "Binary\n--> ";
    std::getline(std::cin, mode);

    cls();
    if (mode == "1") {
      std::cout << "Enter binary \n--> ";
      std::string binary;
      std::getline(std::cin, binary);
      std::cout << binaryToText(binary) << "\n\n";
    } else if (mode == "2") {
      std::cout << "Enter text (use ':q' to finish)\n--> ";
      std::string input;
      std::stringstream text; // i fkin love you
      bool accepting = true;
      while (accepting) {
        std::getline(std::cin, input); // i fkin love/hate you
        if (input == ":q") {
          accepting = false;
        } else {
          text << input << '\n'; // i fkin hate you
        }
      }
      std::string text_str = text.str();
      if (!text_str.empty() &&
          text_str.back() == '\n') { // remove trailing new line char
        text_str.pop_back();
      }
      std::cout << textToBinary(text_str) << "\n\n";
    } else if (mode == "q") {
      break;
    }
  }
  std::cout << "Thanks for using Binary Converter!" << std::endl;
  std::cout << "Made by HassanIQ777" << std::endl;
}