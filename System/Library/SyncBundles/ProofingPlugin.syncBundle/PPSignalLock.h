/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock;

@interface PPSignalLock : NSObject {

	NSConditionLock* _lock;

}
-(id)init;
-(void)dealloc;
-(void)signal;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)wait;
@end

