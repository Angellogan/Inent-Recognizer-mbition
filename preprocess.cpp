#include <vector>
#include <map>
#include <string>
#include <regex>


//std::unordered_multimap<string,string>

std::vector<std::string> qns{"what","why","where","how"};
std::vector<std::string> prepositions{"is","to","from","too","at","on","for","though","although","even","ever","never","sometimes","nothing","everything","then","there","than"};
std::vector<std::string> pronouns{"i","we","you","he","she","her","him","his","hers","theirs","ours","us"};



//std::unordered_multimap<string,string> names_of_class{"calendar" : "today","tomorrow","yesterday","morning","night","noon","evening","time","schedule","appointment","'Oclock"};
std::vector<std::string> calendar_data{"today","tomorrow","yesterday","morning","night","noon","evening","time","schedule","appointment","'Oclock"};



struct name_of_class{

    std::string key;
    std::string value;
 };

std::map<std::string,std::vector<std::string>> class_names{};



