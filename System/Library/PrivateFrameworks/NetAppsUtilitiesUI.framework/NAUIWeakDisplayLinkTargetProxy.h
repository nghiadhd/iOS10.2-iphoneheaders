/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAUIWeakRef;

@interface NAUIWeakDisplayLinkTargetProxy : NSObject {

	NAUIWeakRef* _weakTarget;
	SEL _weakTargetSelector;

}
+(SEL)proxyDisplayLinkSelector;
-(void)dealloc;
-(void)_weakDisplayLinkTargetProxyAction:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

