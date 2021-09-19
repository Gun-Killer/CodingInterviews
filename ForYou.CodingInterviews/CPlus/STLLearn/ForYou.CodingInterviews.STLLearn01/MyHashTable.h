#pragma once
#include <cstdlib>

namespace Killer
{
    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    class MyHashTable
    {

    private:
        struct BucketNode
        {
        public:
            BucketNode()
            {

            }
            BucketNode(const TKey& key_arg)
            {
                key = key_arg;
            }
            TKey key;
            int value_index{ -1 };
            BucketNode* next{ nullptr };
        };
        BucketNode* buckets{ nullptr };
        int size{ 0 };
        int capacity{ 0 };
        TValue* real_value{ nullptr };
        THashFunc hash_func;
        TEqualKey key_equal;

    public:

        using node_type = typename BucketNode;
        MyHashTable();

        void Add(const TKey& key_arg, const TValue& value_arg);

        void Remove(const TKey& key_arg);

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
        int hash = abs(hash_func(key_arg));
        int index = hash % capacity;
        node_type* temp = &buckets[index];

        if (temp->value_index == -1)
        {
            temp->value_index = size;
            temp->key = key_arg;

        }
        else
        {
            if (temp->next == nullptr)
            {
                if (key_equal(key_arg, temp->key))
                {
                    return;
                }
                temp->next = new node_type();
                temp->next->value_index = size;
                temp->next->key = key_arg;
            }
            else
            {
                node_type* next = temp->next;
                while (next != nullptr)
                {
                    if (key_equal(key_arg, next->key))
                    {
                        return;
                    }

                    if (next->next != nullptr)
                    {
                        next = next->next;
                        continue;
                    }

                    next->next = new node_type();
                    next->next->value_index = size;
                    next->next->key = key_arg;
                    break;
                }
            }
        }
        real_value[size] = value_arg;
        size++;
    }

    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    inline void MyHashTable<TKey, TValue, THashFunc, TEqualKey>::Remove(const TKey& key_arg)
    {
        int hash = abs(hash_func(key_arg));
        int index = hash % capacity;
        node_type* temp = &buckets[index];
        if (temp->value_index == -1)// ²»´æÔÚ
        {
            return;
        }

        if (key_equal(key_arg, temp->key))
        {
            for (int i = temp->value_index; i < size - 1; i++)
            {
                real_value[i] = real_value[i + 1];
            }

            if (temp->next == nullptr)
            {
                buckets[index].value_index = temp->next->value_index;
                buckets[index].key = temp->next->key;
                buckets[index].next = temp->next->next;

            }

            size--;
        }
        else
        {
            node_type* parent = temp;
            node_type* next = temp.next;
            while (next != nullptr)
            {
                if (key_equal(key_arg, next->key))
                {
                    parent->next = next->next;

                    for (int i = next->value_index; i < size - 1; i++)
                    {
                        real_value[i] = real_value[i + 1];
                    }
                    size--;
                    delete next;
                    return;
                }
                parent = next;
                next = next->next;
            }
        }
    }

    template<typename TKey, typename TValue, class THashFunc, typename TEqualKey>
    inline MyHashTable<TKey, TValue, THashFunc, TEqualKey>::~MyHashTable()
    {
        if (buckets == nullptr)
        {
            return;
        }
        for (int i = 0; i < capacity; i++)
        {
            node_type& temp = buckets[i];
            node_type* next = temp.next;
            while (next != nullptr)
            {
                auto temp = next->next;
                delete next;
                next = temp;
            }
        }
        delete[] buckets;
        delete[] real_value;
    }
}
