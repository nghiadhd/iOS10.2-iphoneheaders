/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest {

	NSArray* _contentIdentifiersToAdd;
	NSArray* _contentIdentifiersToRemove;

}

@property (setter=_setContentIdentifiersToAdd:,nonatomic,copy) NSArray * contentIdentifiersToAdd;                    //@synthesize contentIdentifiersToAdd=_contentIdentifiersToAdd - In the implementation block
@property (setter=_setContentIdentifiersToRemove:,nonatomic,copy) NSArray * contentIdentifiersToRemove;              //@synthesize contentIdentifiersToRemove=_contentIdentifiersToRemove - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)contentIdentifiersToAdd;
-(void)_setContentIdentifiersToAdd:(id)arg1 ;
-(NSArray *)contentIdentifiersToRemove;
-(void)_setContentIdentifiersToRemove:(id)arg1 ;
@end

