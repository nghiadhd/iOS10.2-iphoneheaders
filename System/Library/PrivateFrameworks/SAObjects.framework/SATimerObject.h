/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SATimerObject : SADomainObject

@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSNumber * timerValue; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)timerValue;
-(void)setTimerValue:(NSNumber *)arg1 ;
@end

