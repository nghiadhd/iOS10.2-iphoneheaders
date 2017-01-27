/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSArray, NSString, NSObject;

@interface CKDClientInfo : NSObject {

	NSArray* _enabledKeyboards;
	NSString* _cachedHostname;
	NSObject*<OS_dispatch_queue> _hostCallbackQueue;
	MGNotificationTokenStructRef _hostNotificationToken;

}

@property (nonatomic,readonly) Class CKDUITextInputModeClass; 
@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSArray * enabledKeyboards; 
+(id)sharedClientInfo;
-(id)init;
-(void)dealloc;
-(id)_init;
-(NSString *)hostname;
-(void)_inputModeChanged;
-(void)_refreshHostname;
-(Class)CKDUITextInputModeClass;
-(void)_refreshEnabledKeyboards;
-(NSArray *)enabledKeyboards;
@end
