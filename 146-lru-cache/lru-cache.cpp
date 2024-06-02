class LRUCache {
public:
    class ListNode{
        public:
        int key;
        int val;
        ListNode* next;
        ListNode* prev;
        ListNode(int _key, int _val){
            key = _key;
            val = _val;
        }
    };
    ListNode* head = new ListNode(-1, -1);
    ListNode* tail = new ListNode(-1, -1);
    int cap;
    unordered_map<int, ListNode*>mp;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addnode(ListNode* newnode){
        ListNode* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void deletenode(ListNode* delnode){
        ListNode* delprev = delnode->prev;
        ListNode* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()){
            ListNode* resnode = mp[key];
            int res = resnode->val;
            mp.erase(key);
            deletenode(resnode);
            addnode(resnode);
            mp[key] = head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            ListNode* existingnode = mp[key];
            mp.erase(key);
            deletenode(existingnode);
        }
        if(mp.size() == cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new ListNode(key, value));
        mp[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */