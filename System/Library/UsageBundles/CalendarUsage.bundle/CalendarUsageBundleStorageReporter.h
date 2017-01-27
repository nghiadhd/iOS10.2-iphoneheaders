/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/UsageBundles/CalendarUsage.bundle/CalendarUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class NSArray, NSMutableDictionary, NSString;

@interface CalendarUsageBundleStorageReporter : NSObject <PSStorageReporting> {

	NSArray* _cachedBundleApps;
	NSMutableDictionary* _cachedCategorySizes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(void)populateUsageBundleApps;
-(unsigned long long)sizeFileAtPath:(id)arg1 ;
-(unsigned long long)sizeDirectoryAtPath:(id)arg1 ;
-(id)init;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
@end
