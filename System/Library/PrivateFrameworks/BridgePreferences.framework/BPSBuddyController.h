/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BPSBuddyController <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
-(id)viewController;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)holdBeforeDisplaying;

@required
-(void)setDelegate:(id)arg1;
-(id)delegate;

@end
