/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSConditionLock;

@interface AOSTransaction : NSObject <NSCoding> {

	unsigned char didSucceed;
	unsigned char didFinish;
	void* result;
	CFErrorRef error;
	/*function pointer*/void* callbackFunction;
	/*^block*/id callbackBlock;
	NSObject*<OS_dispatch_queue> callbackQueue;
	void* context;
	NSConditionLock* waitLock;
	/*function pointer*/void* contextRetain;
	/*function pointer*/void* contextRelease;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)result;
-(BOOL)isSuccessful;
-(id)error;
-(void)finalize;
@end

