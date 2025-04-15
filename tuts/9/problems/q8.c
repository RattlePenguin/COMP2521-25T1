foo(x) {
    // Check our hash table.
    if (HashTableContains(x)) {
        return HashTableGet(x);
    } else {
        Item new = bar(x);
        HashTableInsert(new);
    }
}