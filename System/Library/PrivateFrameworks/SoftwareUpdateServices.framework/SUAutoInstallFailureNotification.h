/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/SUAutoInstallFailureNotification.h>

@protocol SUAutoInstallFailureNotification <NSObject>
@optional
-(void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2;
-(void)dismissNotification;
-(void)postNotificationForError:(id)arg1;

@end


@class NSString;

@interface SUAutoInstallFailureNotification : NSObject <SUAutoInstallFailureNotification> {

	CFUserNotificationRef _notification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2 ;
-(void)dismissNotification;
-(void)postNotificationForError:(id)arg1 ;
@end

