/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKRWLock : NSObject {

	opaque_pthread_rwlock_t _rwLock;

}
-(id)init;
-(void)dealloc;
-(void)unlock;
-(void)wrlock;
-(void)rdlock;
-(int)tryrdlock;
@end

