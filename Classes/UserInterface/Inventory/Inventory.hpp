//
//  Inventory.hpp
//  TheDeadForest-v2
//
//  Created by mac on 2016. 2. 20..
//
//

#pragma once

#include "cocos2d.h"
#include "ui/CocosGUI.h"

#define INVENTORY_PAD 20.0f

namespace realtrick
{
    namespace userinterface
    {
        class ItemSlot;
        
        class Inventory : public cocos2d::Node
        {
            
        public:
            
            static Inventory* create();
            
        private:
            
            cocos2d::ui::ImageView*                 _backgroundView;
            
            cocos2d::ui::ScrollView*                _slotScrollView;
            
            std::vector<std::vector<ItemSlot*>>     _slots;
            
            cocos2d::Size                           _slotSize;
            
            int                                     _numOfSlotX;
            
            int                                     _numOfSlotY;
            
            bool                                    _isScrolling;
            
        private:
            
            Inventory();
            
            virtual ~Inventory();
            
            bool init() override;
            
            void _disableButtonsExcept(ItemSlot* exceptSlot);
            
        };
        
    }
}









