//
// Created by Artemiy Shvedov on 03.04.21.
//

#pragma once
#include <TopDownEngine/core.hpp>

namespace Engine{

    /// ITile structure
    class ITile {
        /// if actors can walk throw it
        bool is_block = false;

    public:
        auto GetIsBlock() const {
            return is_block;
        }

        void SetIsBlock(bool isBlock) {
            is_block = isBlock;
        }
    };
}
