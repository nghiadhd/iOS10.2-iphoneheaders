/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences, NSString, NSArray;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) BOOL logAutoFlush; 
@property (nonatomic,readonly) BOOL logEmitUserNotifications; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
@property (nonatomic,readonly) double simulatedDateForNowOffset; 
+(id)shared;
-(id)init;
-(BOOL)logAutoFlush;
-(BOOL)logEmitUserNotifications;
-(NSArray *)logSimpleConfiguration;
-(double)simulatedDateForNowOffset;
-(NSString *)logFilePath;
@end

