/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSDate;

@interface SANoteSearch : SADomainCommand

@property (nonatomic,copy) NSString * contentQuery; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSDate * toDate; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSDate *)toDate;
-(void)setToDate:(NSDate *)arg1 ;
-(NSString *)contentQuery;
-(void)setContentQuery:(NSString *)arg1 ;
@end

