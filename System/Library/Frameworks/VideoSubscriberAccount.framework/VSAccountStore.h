/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class VSKeychainEditingContext, VSRemoteNotifier, NSArray, NSString;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate> {

	VSKeychainEditingContext* _keychainEditingContext;
	id _changeObserver;
	VSRemoteNotifier* _remoteNotifier;

}

@property (nonatomic,retain) VSKeychainEditingContext * keychainEditingContext;              //@synthesize keychainEditingContext=_keychainEditingContext - In the implementation block
@property (assign,nonatomic,__weak) id changeObserver;                                       //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                              //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)accountClass;
-(id)init;
-(void)dealloc;
-(id)changeObserver;
-(void)setChangeObserver:(id)arg1 ;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)firstAccount;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)accounts;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(void)_sendLocalNotification;
-(VSRemoteNotifier *)remoteNotifier;
-(VSKeychainEditingContext *)keychainEditingContext;
-(id)_keychainItemsWithLimit:(unsigned long long)arg1 ;
-(id)_accountForKeychainItem:(id)arg1 ;
-(void)_sendRemoteNotification;
-(void)setKeychainEditingContext:(VSKeychainEditingContext *)arg1 ;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
@end

