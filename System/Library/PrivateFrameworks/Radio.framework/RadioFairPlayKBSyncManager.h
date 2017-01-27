/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface RadioFairPlayKBSyncManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _activeAccountIdentifier;
	NSMutableArray* _dpInfoKeyBagSyncDataBlobs;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)popDPInfoKeyBagSyncDataWithCount:(long long)arg1 returningAccountIdentifier:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)pushDPInfoKeyBagSyncData:(id)arg1 forAccountIdentifier:(unsigned long long)arg2 ;
@end

