--[[
activity  洛阳遗宝 
by:angel
2014-12-16
--]]

--引入了工程中预定义的字体、颜色值的lua版本。
require "lualibs/common.lua"


function __G__TRACKBACK__(msg)
    print("----------------------------------------")  
    print("LUA ERROR: " .. tostring(msg) .. "\n")  
    print(debug.traceback())  
    print("----------------------------------------")  
end

local function main()
	collectgarbage("setpause",100)
	collectgarbage("setstepmul",5000)
	
	--ToDo:在这里绑定资源
	ResourceManager:sharedInstance():bindTexture("sanguobigpic/activityLuoYangYiBao.plist" , 1 , 191)
	
	
	--通用。
	local visibleSize = CCDirector:sharedDirector():getVisibleSize()
    local scaleRate = visibleSize.height/960
    local scaleRate2 = visibleSize.width/640
	
	--strBg 背景图片   str 是前景字串  strSend 点击响应发送的消息
	--ret tag = baseTag , 背景 baseTag+1 前景图 baseTag + 2  前景label baseTag + 3
	local function createLayerBtn(baseTag, strBg ,str, strSend, isSendWithObj) --baseTag=101
		local ret = CCLayer:create()
		--背景 ，图片在public1中。
		local btnBg = CCSprite:createWithSpriteFrameName(strBg) -- "an.png"
		btnBg:setAnchorPoint(ccp(0,0))
		btnBg:setPosition(0,0)
		btnBg:setTag(baseTag + 1 )
		print("bn背景图片 = "..baseTag+1)
		
		
		local btnBgSize = btnBg:getContentSize()
		--设置该layer的大小
		ret:setContentSize(btnBgSize)
		ret:addChild(btnBg)
		
		
        --前景图片字 或者 前景图片  目前没有使用

        --[[
        local spriteLabel = CCSprite:createWithSpriteFrameName("firstChargeLabel.png");
		spriteLabel:setPosition(ccp(btnBgSize.width * 0.5 , btnBgSize.height * 0.5) )
		spriteLabel:setTag(baseTag + 2 )
		print("btn图片字Tag = "..baseTag + 2 )
		btnBg:addChild(spriteLabel)
        --]]
		

		--前景文字
		local fronLabel = SGCCLabelTTF:create(str , FONT_PANGWA , 30)
		fronLabel:setPosition(ccp(btnBgSize.width * 0.5 , btnBgSize.height * 0.5) )
		fronLabel:setTag(baseTag + 3)
		print("btn字Tag = "..baseTag + 3)
		btnBg:addChild(fronLabel)
				
		--关于new_local请参考：http://blog.csdn.net/wtyqm/article/details/8977975
		--c++ tolua时构造函数自动生成new_local
		local rect = CCRect:new_local(0,0 , btnBgSize.width , btnBgSize.height)
		local isTouchMoved = false --如果本次包含滑动事件，则不处理touchend消息
		local beganPosY = 0
		--touch callback
		local function onTouchBegan(x, y)
			if rect:containsPoint(ret:convertToNodeSpace(ccp(x,y ) ) ) and ret:getParent():isVisible()  then
				isTouchMoved = false
				beganPosY = y
				return true
			else
				return false	
			end
		end
		
		--触控结束时发送消息 
		local function onTouchEnded(x , y)
			if (false == ret:isVisible() ) then
				return
			end

			local sender = SGNotificationCenter:sharedNotificationCenter()
			if isSendWithObj then
                sender:postNotificationWithObj(strSend,ret)  -- "sendRewardReq"  set the get reward msg 
		    else
		    	sender:postNotification(strSend) --"showStoreLayer" go to recharge layer  ,
		    end
			
			--btnBg:setColor(ccc3(255,255,255))
		end
		
		--处理触控的回调
		local function onTouch(kind , x , y)
			print(kind)--观察下kind具体的内容。
			if "began"==kind then
				return onTouchBegan(x , y)
			elseif "moved" == kind then
				local deltaPoxY  = math.abs(y-beganPosY)
				    print ("*********** ** * * dela posY * ** * ** * **"..deltaPoxY)
				    if deltaPoxY >= 20 then 
				        isTouchMoved = true
				    end
			elseif "ended" == kind then
				if false == isTouchMoved then
					return onTouchEnded(x, y)
				end
			end
		end
		
		--注册回调
		ret:registerScriptTouchHandler(onTouch)
		ret:setTouchEnabled(true)
		
		ret:setTag(baseTag)
		print("按钮LayerTag = "..baseTag)
		
		return ret		
	end
	
	--************************************function createLayerBtn(baseTag)  end.
	
	
	
	--************************************创建一个模板
	--对比效果图  创建一个可以放置n个iconbutton的layer，带背景。
	--左上方是一个label，可修改内容，右中有一个领的按钮
	--arguments:count是icon框的个数，baseTag是该layer中的起始tag。
	local function createTemplateLayer(count , baseTag, buttonTag)--此时baseTag = 201 , count=4
		local ret = CCLayer:create()
				
		--可获得物品的背景图片，=layer的背景图片
		local spriteCanGainBg = CCSprite:createWithSpriteFrameName("activityCanGainBg.png");
		spriteCanGainBg:setAnchorPoint(ccp(0 , 0))
		spriteCanGainBg:setPosition(0 , 0)
		spriteCanGainBg:setTag(baseTag) --baseTag=201
		print("可获得物品背景图片Tag = "..baseTag)
		baseTag = baseTag + 1
		ret:addChild(spriteCanGainBg)
		
		--设置该layer的大小 =背景的大小
		ret:setContentSize(spriteCanGainBg:getContentSize() )
		
		--昨上方描述文本
		local labelDes = CCLabelTTF:create("累储500新台币可获得" , FONT_PANGWA , 24)
		labelDes:setAnchorPoint(ccp(0,0))
		labelDes:setPosition(30 ,170 )
		labelDes:setTag(baseTag) --baseTag=202
		print("可获得物品描述的labelTag = "..baseTag)
		baseTag = baseTag + 1
		ret:addChild(labelDes)
		
		--n个可放置icon的小框框
		for i = 1 , count do
			--用来响应触摸的layer容器
			local tempLayer = CCLayer:create()
			
			--该icon容器layer的背景图片
			local spriteBorder = CCSprite:createWithSpriteFrameName("card_bj.png")
			spriteBorder:setAnchorPoint(ccp(0.5,0.5))
			spriteBorder:setPosition(ccp(0,0))
			spriteBorder:setTag(baseTag)
			print("i = "..i.."icon容器layer的tag"..baseTag)
			baseTag = baseTag + 1
			tempLayer:addChild(spriteBorder)
			
			--该容器layer的size
			local spriteBorderSize = spriteBorder:getContentSize()
			tempLayer:setContentSize(spriteBorderSize)
			
			--触摸区域
			local rect = CCRect:new_local( -spriteBorderSize.width * 0.5 ,  -spriteBorderSize.height * 0.5,spriteBorderSize.width , spriteBorderSize.height )
			local isTouchMoved = false --如果本次包含滑动事件，则不处理touchend消息
			local beganPosY = 0
			
			--touch callback			
			local function onTouchBegan(x, y)
				if rect:containsPoint(tempLayer:convertToNodeSpace(ccp(x,y)))  and tempLayer:getParent():isVisible() then
					isTouchMoved = false
					beganPosY = y
					return true
				else
					return false
				end
			end

			local function onTouchEnded(x, y)
				if false == tempLayer:isVisible() then
					return 
				end
				local sender = SGNotificationCenter:sharedNotificationCenter()
				sender:postNotificationWithObj("showFirstChagreItem",tempLayer)
				--spriteBorder:setColor(ccc3(255,255,255))
			end

			local function onTouch(eventType, x, y)
                print(eventType)
				if eventType == "began" then   
					return onTouchBegan(x, y)
				elseif eventType == "moved" then
					local deltaPoxY  = math.abs(y-beganPosY)
				    print ("*********** ** * * dela posY * ** * ** * **"..deltaPoxY)
				    if deltaPoxY >= 20 then 
				        isTouchMoved = true
				    end
				elseif eventType == "ended" then
					if isTouchMoved == false then
						return onTouchEnded(x, y)
					end
				end
			end
			
			--注册触控回调
			tempLayer:registerScriptTouchHandler(onTouch)
			tempLayer:setTouchEnabled(true)
			
			tempLayer:setPosition(ccp(35+56 + (i-1) * 113  , 60+46 ))
			tempLayer:setTag(baseTag)
			print("i = "..i.." , iconlayerTag = "..baseTag)
			baseTag = baseTag + 1
			
			ret:addChild(tempLayer)
		end
		
		
		
		local rewardLayer = createLayerBtn(buttonTag,"activityBuy.png","","sendRewardReq",true)-- 
        rewardLayer:ignoreAnchorPointForPosition(false)
        rewardLayer:setAnchorPoint(ccp(0.5,0.5))
		rewardLayer:setPosition(525 , ret:getContentSize().height * 0.5)
		ret:addChild(rewardLayer)
		
		
		
		
		ret:setTag(baseTag)
		print("可获得物品容器layer = "..baseTag)
		baseTag = baseTag + 1
		return ret
	end
	
	--************************************function createTemplateLayer()   end.
	
	
	
	
	
	------本lua返回的layer
	local function createRetLayer(baseTag)
		
		--
		
        local retLayer = CCLayer:create()
	
		local visibleSize = CCDirector:sharedDirector():getVisibleSize()
		local orign = CCDirector:sharedDirector():getVisibleOrigin()
	
        --添加可获得物品的layer-4
		local tempLayer_4 = createTemplateLayer(4 , 501, 540)
        tempLayer_4:ignoreAnchorPointForPosition(false)
        tempLayer_4:setAnchorPoint(ccp(0.5,0.5))
        tempLayer_4:setPosition(visibleSize.width/2 , tempLayer_4:getContentSize().height * 0.5)
        --print("可获得物品的layer-4 posY = "..tempLayer_3:getPositionY() )
		retLayer:addChild(tempLayer_4)

		--添加可获得物品的layer-3
		local tempLayer_3 = createTemplateLayer(4 , 401, 440)
        tempLayer_3:ignoreAnchorPointForPosition(false)
        tempLayer_3:setAnchorPoint(ccp(0.5,0.5))
        tempLayer_3:setPosition(visibleSize.width/2 , tempLayer_3:getContentSize().height + tempLayer_4:getPositionY() + 10 )
        --print("可获得物品的layer-3 posY = "..tempLayer_3:getPositionY() )
		retLayer:addChild(tempLayer_3)

		--添加可获得物品的layer-2
		local tempLayer_2 = createTemplateLayer(4 , 301, 340)
		tempLayer_2:ignoreAnchorPointForPosition(false)
		tempLayer_2:setAnchorPoint(ccp(0.5,0.5))
        tempLayer_2:setPosition(ccp(visibleSize.width/2, tempLayer_3:getPositionY() + tempLayer_3:getContentSize().height + 10) )
		retLayer:addChild(tempLayer_2)

		--添加可获得物品的layer-1
		local tempLayer = createTemplateLayer(4 , 201,240)
		tempLayer:ignoreAnchorPointForPosition(false)
		tempLayer:setAnchorPoint(ccp(0.5,0.5))
		tempLayer:setPosition(ccp(visibleSize.width/2 , tempLayer_2:getPositionY() + tempLayer:getContentSize().height +10) )
		retLayer:addChild(tempLayer)

		--添加可获得物品的layer-1
		local tempLayer_ = createTemplateLayer(4 , 101,140)
		tempLayer_:ignoreAnchorPointForPosition(false)
		tempLayer_:setAnchorPoint(ccp(0.5,0.5))
		tempLayer_:setPosition(ccp(visibleSize.width/2 , tempLayer:getPositionY() + tempLayer_:getContentSize().height +10) )
		retLayer:addChild(tempLayer_)



		--该活动的背景图片
		local spriteBg = CCSprite:createWithSpriteFrameName("activityLuoYangYiBaoBg.png")
		spriteBg:setAnchorPoint(ccp(0.5,0.5))
        spriteBg:setPosition( visibleSize.width * 0.5 ,tempLayer_:getPositionY() + tempLayer_:getContentSize().height * 0.5 + spriteBg:getContentSize().height * 0.5 +15)
		spriteBg:setTag(baseTag)
		print("活动背景图片的tag = "..baseTag)
		baseTag = baseTag + 1
		retLayer:addChild(spriteBg)

		
		--2个label，第一个  活动时间
		local labelActivityTime = SGCCLabelTTF:create("活动时间 ： 2014-08-22----2014-08-22" , FONT_PANGWA , 20)
		labelActivityTime:setPosition(spriteBg:getContentSize().width * 0.5 , 58)
		labelActivityTime:setTag(baseTag)
		print("活动时间tag = "..baseTag)
		baseTag = baseTag + 1
		spriteBg:addChild(labelActivityTime)
		--第二个label  活动描述
		local labelActivityDes = SGCCLabelTTF:create("活动期间，储值天数达到指定天数，可领取对应奖励" , FONT_PANGWA , 22)
		labelActivityDes:setPosition(spriteBg:getContentSize().width * 0.5 , 20)
		labelActivityDes:setTag(baseTag)
		print("活动描述tag = "..baseTag)
		baseTag = baseTag + 1
		spriteBg:addChild(labelActivityDes)

        retLayer:setContentSize( CCSize:new_local( visibleSize.width , spriteBg:getPositionY() + spriteBg:getContentSize().height * 0.5 - tempLayer_4:getPositionY()+ tempLayer_4:getContentSize().height * 0.5 + 15 ) )
        print("最顶层高**** "..retLayer:getContentSize().height)

        --红色的背景
		local spriteRedBg = CCSprite:createWithSpriteFrameName("activitybg.png")
		local scaleX = 1.0 * visibleSize.width / 245
        local scaleY = 1.0 * (retLayer:getContentSize().height ) / 233
		spriteRedBg:setScaleX(scaleX)
		spriteRedBg:setScaleY(scaleY)
		spriteRedBg:setAnchorPoint(ccp(0.5,0.5 ))
        spriteRedBg:setPosition(retLayer:getContentSize().width * 0.5 , retLayer:getContentSize().height*0.5 )
        --spriteRedBg:setPosition(0,0)
		retLayer:addChild(spriteRedBg , -100 , -100)

        retLayer:setTouchEnabled(true)
		retLayer:setTag(baseTag)
		print("最顶层layer的Tag = "..baseTag)
		baseTag = baseTag + 1
		return retLayer
	end
	
	--添加到当前执行的scene中。
	local runningScene = CCDirector:sharedDirector():getRunningScene()
	runningScene:addChild(createRetLayer(1) , 1  ,654358)
end

xpcall ( main , __G__TRACKBACK__)

--******************************file end.************************************