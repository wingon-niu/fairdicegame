#include "fairdicelogs.hpp"

void fairdicelogs::result(st_result result) {
    eosio::print("------ into fairdicelogs :: result ------\n");

    require_auth(FAIR_DICE_GAME);
    require_recipient(result.player);
}
