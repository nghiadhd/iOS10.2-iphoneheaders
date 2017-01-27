/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAlarmAlarmAction.h>

@class NSArray, NSString;

@interface SAAlarmAlarmShow : AceObject <SAAlarmAlarmAction>

@property (nonatomic,copy) NSArray * alarmIds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alarmShow;
+(id)alarmShowWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)alarmIds;
-(void)setAlarmIds:(NSArray *)arg1 ;
@end

