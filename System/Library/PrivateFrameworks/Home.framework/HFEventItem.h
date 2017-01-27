/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMHome, HMTrigger, HMEvent, NSString;

@interface HFEventItem : HFItem <HFHomeKitItemProtocol> {

	HMHome* _home;
	HMTrigger* _trigger;
	HMEvent* _event;

}

@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMTrigger * trigger;                            //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) HMEvent * event;                                //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(HMEvent *)event;
-(HMTrigger *)trigger;
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)_updateLocationEvent:(id)arg1 options:(id)arg2 ;
-(id)_updateCharacteristicEvent:(id)arg1 options:(id)arg2 ;
-(id)initWithHome:(id)arg1 trigger:(id)arg2 event:(id)arg3 ;
-(id<HFHomeKitObject>)homeKitObject;
@end

