/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomAnalytics/Process.h>

@class NSSet, NSOrderedSet, AppCalendarUsage;

@interface App : Process

@property (nonatomic,retain) NSSet * hasAppRun; 
@property (nonatomic,retain) NSOrderedSet * hasTypicalUsage; 
@property (nonatomic,retain) NSSet * hasCalendarUsage; 
@property (nonatomic,retain) AppCalendarUsage * hintCalendarUsage; 
-(void)insertObject:(id)arg1 inHasTypicalUsageAtIndex:(unsigned long long)arg2 ;
@end

