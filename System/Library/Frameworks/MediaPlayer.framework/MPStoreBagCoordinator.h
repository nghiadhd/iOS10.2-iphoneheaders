/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject;

@interface MPStoreBagCoordinator : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(BOOL)requiresStoreBagReloadFromEnvironment:(id)arg1 toEnvironment:(id)arg2 ;
+(id)sharedCoordinator;
-(id)init;
-(void)loadStoreBagForEnvironment:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

