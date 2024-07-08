#include <iostream>
#include <list>
#include <string>
using namespace std;

class HashMap {
private:
    static const int hashGroups = 10;
    list<pair<int, string>> table[hashGroups];

public:
    bool isEmpty() const {
        int sum = 0;
        for (int i = 0; i < hashGroups; i++)
            sum += table[i].size();
        if (!sum)
            return true;
        return false;
    }

    int hashFunction(int key) {
        return key % hashGroups;
    }

    void insertItem(int key, string value) {
        int index = hashFunction(key);
        auto &bucket = table[index];
        bool keyExists = false;
        for (auto &kv : bucket) {
            if (kv.first == key) {
                kv.second = value;
                keyExists = true;
                break;
            }
        }
        if (!keyExists)
            bucket.emplace_back(key, value);
    }

    void removeItem(int key) {
        int index = hashFunction(key);
        auto &bucket = table[index];
        auto itr = bucket.begin();
        bool keyExists = false;
        for (; itr != bucket.end(); itr++) {
            if (itr->first == key) {
                keyExists = true;
                break;
            }
        }
        if (keyExists)
            bucket.erase(itr);
    }

    string searchItem(int key) {
        int index = hashFunction(key);
        auto &bucket = table[index];
        for (auto kv : bucket) {
            if (kv.first == key)
                return kv.second;
        }
        return "";
    }

    void displayHash() {
        for (int i = 0; i < hashGroups; i++) {
            if (table[i].size() == 0)
                continue;
            for (auto kv : table[i])
                cout << "Key: " << kv.first << " Value: " << kv.second << endl;
        }
    }
};

int main() {
    HashMap hmap;
    
    hmap.insertItem(1, "Value1");
    hmap.insertItem(2, "Value2");
    hmap.insertItem(3, "Value3");
    hmap.insertItem(4, "Value4");

    cout << "Hash Map:" << endl;
    hmap.displayHash();

    cout << "Searching for key 3: " << hmap.searchItem(3) << endl;
    cout << "Searching for key 5: " << hmap.searchItem(5) << endl;

    hmap.removeItem(2);
    cout << "After removing key 2:" << endl;
    hmap.displayHash();

    return 0;
}
