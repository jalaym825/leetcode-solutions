class FrequencyTracker
{
    unordered_map<int, int> m;
    unordered_map<int, int> f;
public:
    FrequencyTracker() {}

    void add(int number)
    {
        int oldNumCount = m[number];
        int newNumCount = ++m[number];

        f[oldNumCount]--;
        f[newNumCount]++;
    }

    void deleteOne(int number)
    {
        int oldNumCount = m[number];
        if (oldNumCount == 0)
            return;
        int newNumCount = --m[number];

        f[oldNumCount]--;
        f[newNumCount]++;
    }

    bool hasFrequency(int frequency)
    {
        return (f[frequency] != 0);
    }
};
