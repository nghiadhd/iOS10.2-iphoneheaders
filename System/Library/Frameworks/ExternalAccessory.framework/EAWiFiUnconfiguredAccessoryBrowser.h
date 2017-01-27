/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EAWiFiUnconfiguredAccessoryBrowserDelegate, OS_dispatch_queue;
@class NSSet, NSObject, NSPredicate;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject {

	BOOL __debugLog;
	id<EAWiFiUnconfiguredAccessoryBrowserDelegate> _delegate;
	NSSet* _unconfiguredAccessories;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSPredicate* _accessorySearchPredicate;

}

@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) NSPredicate * accessorySearchPredicate;                                                //@synthesize accessorySearchPredicate=_accessorySearchPredicate - In the implementation block
@property (assign,nonatomic,__weak) id<EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSSet * unconfiguredAccessories;                                                //@synthesize unconfiguredAccessories=_unconfiguredAccessories - In the implementation block
-(id)init;
-(void)setDelegate:(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_handleBrowserDidUpdateState:(id)arg1 ;
-(void)_handleNewAccessoriesNotification:(id)arg1 ;
-(void)_handleRemovedAccessoriesNotification:(id)arg1 ;
-(void)_handlePurgeAccessoriesSetNotification:(id)arg1 ;
-(void)stopSearchingForUnconfiguredAccessories;
-(void)setAccessorySearchPredicate:(NSPredicate *)arg1 ;
-(void)_handleBrowserFinishedConfiguring:(id)arg1 ;
-(void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2 ;
-(NSPredicate *)accessorySearchPredicate;
-(NSSet *)unconfiguredAccessories;
-(void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

