//
//  TestScene.hpp
//  TheDeadForest
//
//  Created by 남준현 on 2015. 12. 6..
//
//


#pragma once

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocos-ext.h"

namespace realtrick
{
    
    class LightEffect;
    
    class TestScene : public cocos2d::LayerColor
    {
        
    public:
        
        virtual ~TestScene();
        
        static cocos2d::Scene* createScene();
        virtual bool init() override;
        CREATE_FUNC(TestScene);
        virtual void update(float dt) override;
        
    private:
        
        cocos2d::Size                       _winSize;
        
    };
    
}
