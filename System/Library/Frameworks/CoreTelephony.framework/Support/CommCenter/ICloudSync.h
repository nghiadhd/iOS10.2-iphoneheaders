/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSUbiquitousKeyValueStore;

@interface ICloudSync : NSObject {

	NSUbiquitousKeyValueStore* fKVStore;
	queue* fQueue;
	block<void ()(const __CFDictionary *, const __CFArray *, bool)>* fCallback;

}
-(void)invokeCallbackWithDict:(id)arg1 changedKeys:(id)arg2 ;
-(void)storeDidChange:(id)arg1 ;
-(void)forceCompleteReverseUpdate;
-(void)updateICloudKey:(id)arg1 withValue:(id)arg2 ;
-(void)updateICloudComplete;
-(void)forceCleanUp;
-(void)dealloc;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)accountAvailabilityChanged:(id)arg1 ;
@end

