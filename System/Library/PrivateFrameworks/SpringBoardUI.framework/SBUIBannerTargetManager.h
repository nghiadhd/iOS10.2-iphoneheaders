/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMapTable, NSArray;

@interface SBUIBannerTargetManager : NSObject {

	NSHashTable* _proxies;
	NSMapTable* _implementationToProxyMap;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSArray * targets; 
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)_registerTargetImplementation:(id)arg1 ;
-(void)_unregisterTargetImplementation:(id)arg1 ;
-(id)_proxyForTargetImplementation:(id)arg1 ;
-(NSArray *)targets;
@end

