//
// Created by agar on 05/08/2020.
//

#ifndef BITTORRENT_ICOMMAND_HPP
#define BITTORRENT_ICOMMAND_HPP

template<typename... Args>
class               ICommand
{
public:
    virtual void    run(Args ...) = 0;
};

#endif //BITTORRENT_ICOMMAND_HPP
