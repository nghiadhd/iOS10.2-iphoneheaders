/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODRWorkManager : NSObject {

	int _outstandingWorkCount;

}

@property (assign) int outstandingWorkCount;              //@synthesize outstandingWorkCount=_outstandingWorkCount - In the implementation block
+(id)sharedInstance;
-(BOOL)sentinelFileIsPresent;
-(void)startHandlingQueuedWork;
-(void)incrementOutstandingWorkCount;
-(void)decrementOutstandingWorkCount;
-(id)enqueueAssetDownloadsForBundleID:(id)arg1 andContext:(id)arg2 ;
-(id)enqueueFakeWorkForBundleID:(id)arg1 andContext:(id)arg2 ;
-(id)_fetchWork;
-(void)addWork:(id)arg1 ;
-(void)removeWork:(id)arg1 ;
-(id)ongoingWorkForApplicationWithBundeID:(id)arg1 ;
-(int)outstandingWorkCount;
-(void)setOutstandingWorkCount:(int)arg1 ;
-(id)init;
-(void)_saveChanges;
@end
