/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Accounts/Notification/PCSAccountNotificationPlugin.bundle/PCSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface PCSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)careAboutAccount:(id)arg1 ;
-(BOOL)setupAccount:(id)arg1 type:(id)arg2 ;
-(id)iCloudEnvironmentForAccount:(id)arg1 ;
-(id)escrowURL:(id)arg1 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

