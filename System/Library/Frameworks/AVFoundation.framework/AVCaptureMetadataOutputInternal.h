/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReferencingDelegateStorage, NSArray, AVWeakReference, NSObject;

@interface AVCaptureMetadataOutputInternal : NSObject {

	AVWeakReferencingDelegateStorage* delegateStorage;
	NSArray* metadataObjectTypes;
	CGRect rectOfInterest;
	AVWeakReference* weakReference;
	OpaqueFigSimpleMutexRef remoteQueueMutex;
	remoteQueueReceiverOpaqueRef remoteReceiverQueue;
	NSObject*<OS_dispatch_queue> objectQueue;

}
-(id)init;
-(void)dealloc;
@end

