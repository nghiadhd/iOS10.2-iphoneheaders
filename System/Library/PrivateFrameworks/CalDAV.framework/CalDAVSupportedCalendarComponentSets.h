/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {

	NSMutableSet* _componentSets;

}
+(BOOL)allowedCalendars:(id)arg1 contains:(id)arg2 ;
-(id)init;
-(id)description;
-(id)componentsAsString;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)addCompSet:(id)arg1 ;
@end

