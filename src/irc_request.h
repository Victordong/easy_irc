#pragma once

#include<string>
#include<vector>

namespace irc {
    enum IRC_REQUEST_OP {
        NICK,
        USER,
        QUIT,
        PRIVMSG, 
        NOTICE,
        PING,
        PONG,
        MOTD,
        LUSERS,
        WHOIS,
        JOIN,
        PART,
        UNKNOW
    };
    class IRCRequest {

    public:
        IRC_REQUEST_OP op; // 操作
        std::string raw; // 裸文本
        std::vector<std::string> cmds; // 参数
    public:
         
        IRCRequest(std::string& _raw);
        std::string ToString(); //转成字符串

    };
}