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
            int value_index{ -1 };
            BucketNode* next;
        };
        BucketNode* buckets{ nullptr };
        int size{ 0 };
        int capacity{ 0 };
        TValue* real_value{ nullptr };
        THashFunc hash_func;

        using node_type = typename BucketNode;

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
        buckets = new node_type[capacity];
    }
    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    inline void MyHashTable<TKey, TValue, THashFunc, TEqualKey>::Add(const TKey& key_arg, const TValue& value_arg)
    {
        int hash = hash_func(key_arg);
        int index = hash % capacity;
        node_type& temp = buckets[index];
        if (temp.value_index == -1)
        {
            buckets[index] = new node_type{ key_arg, size, nullptr };
        }
        else
        {
            temp.next = new node_type{ key_arg, size, nullptr };
        }
        real_value[size] = value_arg;
        size++;
    }

    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    inline MyHashTable<TKey, TValue, THashFunc, TEqualKey>::~MyHashTable()
    {
        if (buckets == nullptr)
        {
            return;
        }
        for (auto item : buckets)
        {
            auto next = item.next;
            while (next != nullptr)
            {
                auto temp = next.next;
                delete next;
                next = temp;
            }
        }
        delete[] buckets;
        delete[] real_value;
    }
}
