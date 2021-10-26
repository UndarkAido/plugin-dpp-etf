//
// Created by Aidan on 10/25/2021.
//

#pragma once

#include <dpp/etf.h>

namespace discordpp {
template <class BASE> class PluginDppETF : public BASE, virtual BotStruct {
    dpp::etf_parser parser;

  public:
    PluginDppETF() : BASE() { BASE::encoding_ = "etf"; }

  protected:
    json parsePayload(const std::string &payload) override {
        return parser.parse(payload);
    }
    std::string buildPayload(const json &payload) override {
        return parser.build(payload);
    }
};
} // namespace discordpp
