/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewController;

@interface AAUINetworkReachabilityAlert : NSObject {

	BOOL _isMonitoring;
	NSMutableArray* _completionBlocks;
	UIViewController* _presenter;

}
+(BOOL)isNetworkReachable;
-(id)initWithPresenter:(id)arg1 ;
-(id)_disableAction;
-(id)_okAction;
-(void)dealloc;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)showIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)showIfNecessary;
-(void)_completeWithSuccess:(BOOL)arg1 ;
@end

