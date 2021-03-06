/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMRoom, HMHome, NSString;

@interface HFRoomItem : HFItem <HFHomeKitItemProtocol> {

	HMRoom* _room;
	HMHome* _home;

}

@property (nonatomic,readonly) HMRoom * room;                                  //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(NSString *)description;
-(HMHome *)home;
-(HMRoom *)room;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
-(id)togglePowerState;
-(id<HFHomeKitObject>)homeKitObject;
@end

