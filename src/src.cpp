#include <iostream>
#include <thread>

int main()
{    
    int state_
    
    enum State
    {
        STATE_CREDIT,
        STATE_TITLE,
        STATE_OPENIG,
        STATE_DEMO
    };
    
    state_=STATE_CREDIT;
    
    switch(state_)
    {
        case STATE_CREDIT:
        {
            std::cout << "credit\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ        
            state_=STATE_TITLE;
            break;
        }
        case STATE_TITLE:
        {
            std::cout << "title\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
            state_=STATE_OPENING;
            break;
        }
        case STATE_TITLE:
        {
            std::cout << "opening\n";
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
            state_=STATE_DEMO;
        }
        case STATE_DEMO:
        {
            std::cout << "demo\n";
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
            state_=STATE_CREDIT;
            break;
        }
    }
}

