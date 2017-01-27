/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SANPSkipTimeInterval : SADomainCommand

@property (nonatomic,copy) NSNumber * adjustmentInMilliseconds; 
+(id)skipTimeInterval;
+(id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)adjustmentInMilliseconds;
-(void)setAdjustmentInMilliseconds:(NSNumber *)arg1 ;
@end

