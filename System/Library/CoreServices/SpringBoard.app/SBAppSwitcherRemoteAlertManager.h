/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBAppSwitcherRemoteAlertSet;

@interface SBAppSwitcherRemoteAlertManager : NSObject {

	SBAppSwitcherRemoteAlertSet* _remoteAlerts;

}
+(id)sharedInstance;
-(id)currentRemoteAlerts;
-(void)addRemoteAlert:(id)arg1 ;
-(void)removeRemoteAlert:(id)arg1 ;
-(void)addPlaceholderForIdentifier:(id)arg1 ;
-(void)removePlaceholderForIdentifier:(id)arg1 ;
@end

