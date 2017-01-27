/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLHIDEventOperatorComposition;

@interface PLButtonAgent : PLAgent {

	PLHIDEventOperatorComposition* _menuButton;
	PLHIDEventOperatorComposition* _powerButton;

}

@property (retain) PLHIDEventOperatorComposition * menuButton;               //@synthesize menuButton=_menuButton - In the implementation block
@property (retain) PLHIDEventOperatorComposition * powerButton;              //@synthesize powerButton=_powerButton - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)defaults;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)setMenuButton:(PLHIDEventOperatorComposition *)arg1 ;
-(void)logEventPointButtonWithEntry:(id)arg1 ;
-(PLHIDEventOperatorComposition *)menuButton;
-(PLHIDEventOperatorComposition *)powerButton;
-(void)setPowerButton:(PLHIDEventOperatorComposition *)arg1 ;
@end
