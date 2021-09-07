#pragma once
namespace Killer
{
    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    class MyHashTable
    {    
    private:
        class BucketNode
        {
            const TKey key;
            int value_index{0};
            BucketNode* next;
        };
        BucketNode* buckets{ nullptr };
        int size{ 0 };
        int capacity{0}
        TValue* real_value{ nullptr };
        THashFunc hash_func;
    public:
        MyHashTable();

        void Add(const TKey& key_arg, const TValue& value_arg);

        ~MyHashTable();
    };

    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    inline MyHashTable<TKey, TValue, THashFunc, TEqualKey>::MyHashTable()
    {
        capacity = 10;
        real_value = new TValue[capacity];
        buckets = new BucketNode[capacity];
    }
    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    inline void MyHashTable<TKey, TValue, THashFunc, TEqualKey>::Add(const TKey& key_arg, const TValue& value_arg)
    {
       int hash = hash_func(key_arg);
       var index = hash % capacity;
        

    }

    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    inline MyHashTable<TKey, TValue, THashFunc, TEqualKey>::~MyHashTable()
    {
        if (buckets == nullptr)
        {
            return;
        }
        delete[] buckets;
        delete[] real_value;
    }
}
