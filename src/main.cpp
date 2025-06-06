#include <iostream>
#include <nlohmann/json.hpp>
#include <boost/algorithm/string.hpp>
#include <sqlite3.h>

int main() {
    std::cout << "Hello from CLI App!" << std::endl;

    nlohmann::json obj = {
        {"name", "example"},
        {"version", 1}
    };
    std::cout << "JSON: " << obj.dump(2) << std::endl;

    std::string s = "hello world !";
    boost::to_upper(s);
    std::cout << "Boost upper: " << s << std::endl;

    sqlite3* db;
    if (sqlite3_open(":memory:", &db) == SQLITE_OK) {
        std::cout << "Opened in-memory SQLite database." << std::endl;
        sqlite3_close(db);
    } else {
        std::cerr << "Failed to open SQLite DB." << std::endl;
    }

    return 0;
}
