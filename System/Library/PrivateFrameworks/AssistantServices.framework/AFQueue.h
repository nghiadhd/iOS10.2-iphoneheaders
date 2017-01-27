/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol AFQueueDelegate;
@class NSMutableArray;

@interface AFQueue : NSObject <NSFastEnumeration> {

	id<AFQueueDelegate> _delegate;
	NSMutableArray* _objects;

}

@property (getter=_objects,nonatomic,readonly) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) id frontObject; 
@property (nonatomic,readonly) long long count; 
@property (assign,nonatomic,__weak) id<AFQueueDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setDelegate:(id<AFQueueDelegate>)arg1 ;
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)description;
-(id<AFQueueDelegate>)delegate;
-(id)_objects;
-(id)frontObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)dequeueAllObjects;
-(void)enqueueObjects:(id)arg1 ;
@end

