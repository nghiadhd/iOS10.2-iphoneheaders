/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSArray;

@interface AVGlobalOperationQueue : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (copy,readonly) NSArray * unfinishedOperations; 
+(id)defaultQueue;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)unfinishedOperations;
-(void)enqueueOperation:(id)arg1 ;
@end

