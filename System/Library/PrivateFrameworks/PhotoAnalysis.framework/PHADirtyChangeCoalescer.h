/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;
@class NSObject, PHACoalescer;

@interface PHADirtyChangeCoalescer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PHACoalescer* _valueCoalescer;
	id<PHADirtyChangeCoalescerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHADirtyChangeCoalescerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<PHADirtyChangeCoalescerDelegate>)arg1 ;
-(id<PHADirtyChangeCoalescerDelegate>)delegate;
-(void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 ;
@end
