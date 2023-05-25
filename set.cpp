class Set {
private:
    vector<int> elements;

public:
     //Function to check if an element belongs to the set
    bool isMember(int element) {
        for (int i = 0; i < elements.size(); ++i) {
            if (elements[i] == element) {
                return true;
            }
        }
        return false;
    };
