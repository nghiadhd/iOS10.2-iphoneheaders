/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/BaseJobAction.h>

@class NSOrderedSet;

@interface CancelJobAction : BaseJobAction {

	NSOrderedSet* _jobIDs;

}
+(BOOL)supportsMultipleEntities;
-(void)run;
-(id)initWithEvent:(id)arg1 ;
@end

