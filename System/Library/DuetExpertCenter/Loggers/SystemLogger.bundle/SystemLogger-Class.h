/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Loggers/SystemLogger.bundle/SystemLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DECFeedbackLogger.h>

@class NSArray, NSString;

@interface SystemLogger : NSObject <_DECFeedbackLogger> {

	NSArray* _loggers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)logForExpert:(id)arg1 feedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4 ;
@end

