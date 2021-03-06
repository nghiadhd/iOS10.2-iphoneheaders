/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSDate, IKViewElement;

@interface IKTimelineEventElement : IKViewElement

@property (nonatomic,readonly) double offset; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain,readonly) IKViewElement * relatedContent; 
-(double)duration;
-(double)offset;
-(IKViewElement *)relatedContent;
-(NSDate *)startDate;
@end

