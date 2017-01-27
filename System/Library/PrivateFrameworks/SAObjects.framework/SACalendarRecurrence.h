/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long endCount; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) int frequency; 
@property (assign,nonatomic) long long interval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)endCount;
-(void)setEndCount:(long long)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
@end

