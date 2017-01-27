/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSString, NSArray, NSDate;

@interface PFCoalescerActivityToken : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSString* _reason;
	NSArray* _callStackReturnAddresses;
	NSDate* _creationDate;

}

@property (retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSString * reason;                                        //@synthesize reason=_reason - In the implementation block
@property (retain) NSArray * callStackReturnAddresses;                       //@synthesize callStackReturnAddresses=_callStackReturnAddresses - In the implementation block
@property (retain) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
-(void)dealloc;
-(id)description;
-(NSArray *)callStackReturnAddresses;
-(NSString *)reason;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)endActivity;
-(id)initWithDispatchGroup:(id)arg1 reason:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallStackReturnAddresses:(NSArray *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

