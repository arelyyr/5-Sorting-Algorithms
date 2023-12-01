void readWordsFromFile(std::string fileName, std::vector<std::string>& words) {
    // Open the input file
    std::ifstream input(fileName);

    // Read the words from the input file
    std::string word;
    while (input >> word) {
        // Convert the word to lowercase
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Exclude certain words and characters
        if (word == "the" || word == "and" || word == "or" || word == "a" || word == "an" || word == "." || word == "\"" || word == "\'" || word == "?"){
            continue;
        }

      for (int i = 0; i < word.length(); i++)
      {
        if (ispunct(word[i]))
        {
          word.erase(i,1);
        }
      }
      
      
        if (ispunct(word.back())) {
            word.pop_back();
        }
        if (ispunct(word.front())) {
            word.erase(0, 1);
        }

        // Add the word to the vector
        words.push_back(word);
    }

    // Close the input file
    input.close();
}