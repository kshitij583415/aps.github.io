#include <iostream>
#include <unordered_map>
#include <string>

struct UserProfile {
    std::string name;
    int age;
    std::string email;

    UserProfile(std::string n, int a, std::string e) : name(n), age(a), email(e) {}
};

int main() {
    // Create an unordered map to store user profiles
    std::unordered_map<std::string, UserProfile> userProfiles;

    // Inserting user profiles
    userProfiles["user1"] = UserProfile("Alice", 25, "alice@example.com");
    userProfiles["user2"] = UserProfile("Bob", 30, "bob@example.com");
    userProfiles["user3"] = UserProfile("Charlie", 22, "charlie@example.com");

    // Retrieving a user profile
    std::string username = "user2";
    if (userProfiles.find(username) != userProfiles.end()) {
        UserProfile user = userProfiles[username];
        std::cout << "Name: " << user.name << ", Age: " << user.age << ", Email: " << user.email << std::endl;
    } else {
        std::cout << "User not found!" << std::endl;
    }

    // Deleting a user profile
    userProfiles.erase("user3");

    return 0;
}
