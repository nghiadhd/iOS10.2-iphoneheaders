/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSDate, NSString;

@interface SAReminderSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * completionStatus; 
@property (nonatomic,copy) NSDate * dueAfter; 
@property (nonatomic,copy) NSDate * dueBefore; 
@property (nonatomic,copy) NSString * listName; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSNumber *)completionStatus;
-(void)setCompletionStatus:(NSNumber *)arg1 ;
-(NSDate *)dueAfter;
-(void)setDueAfter:(NSDate *)arg1 ;
-(NSDate *)dueBefore;
-(void)setDueBefore:(NSDate *)arg1 ;
-(NSString *)listName;
-(void)setListName:(NSString *)arg1 ;
@end

