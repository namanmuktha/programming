#include <iostream>
#include <vector>
#include <algorithm>

struct Event {
    int time;
    int type;  // 0 for arrival, 1 for leaving
};

bool compareEvents(const Event& a, const Event& b) {
    if (a.time == b.time) {
        // If two events have the same time, arrivals should come first.
        return a.type < b.type;
    }
    return a.time < b.time;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Event> events;

    // Reading arrival and leaving times and adding events to the vector
    for (int i = 0; i < n; ++i) {
        int arrival, leaving;
        std::cin >> arrival >> leaving;

        events.push_back({arrival, 0});  // Arrival event
        events.push_back({leaving, 1});  // Leaving event
    }

    // Sorting events based on time
    std::sort(events.begin(), events.end(), compareEvents);

    int currentCustomers = 0;
    int maxCustomers = 0;

    // Processing events
    for (const auto& event : events) {
        if (event.type == 0) {  // Arrival
            currentCustomers++;
        } else {  // Leaving
            currentCustomers--;
        }

        // Update the maximum number of customers
        maxCustomers = std::max(maxCustomers, currentCustomers);
    }

    std::cout << maxCustomers << "\n";

    return 0;
}
