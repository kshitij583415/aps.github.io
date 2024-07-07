#include <iostream>
#include <queue>
#include <string>

class MessagingQueue {
private:
    std::queue<std::string> messageQueue;

public:
    void sendMessage(const std::string& message) {
        messageQueue.push(message);
        std::cout << "Message sent: " << message << std::endl;
    }

    void receiveMessage() {
        if (!messageQueue.empty()) {
            std::string message = messageQueue.front();
            messageQueue.pop();
            std::cout << "Message received: " << message << std::endl;
        } else {
            std::cout << "No messages to receive." << std::endl;
        }
    }

    bool isEmpty() const {
        return messageQueue.empty();
    }
};

int main() {
    MessagingQueue mq;

    // Sending messages
    mq.sendMessage("Hello!");
    mq.sendMessage("How are you?");
    mq.sendMessage("This is a real-time messaging example.");

    // Receiving messages
    while (!mq.isEmpty()) {
        mq.receiveMessage();
    }

    return 0;
}
