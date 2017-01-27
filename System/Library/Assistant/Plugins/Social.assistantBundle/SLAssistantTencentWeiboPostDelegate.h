/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLAssistantPostDelegate.h>

@class NSString, NSBundle;

@interface SLAssistantTencentWeiboPostDelegate : NSObject <SLAssistantPostDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * accountTypeIdentifier; 
@property (retain) NSString * lastAccountIdentifier; 
@property (readonly) NSBundle * locationPermissionBundle; 
-(NSString *)lastAccountIdentifier;
-(NSBundle *)locationPermissionBundle;
-(id)extractErrorDetailsFromResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(BOOL)responseDataIndicatesDuplicatePost:(id)arg1 urlResponse:(id)arg2 ;
-(id)requestForPostWithStatus:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifyGeotagSettingsForAccount:(id)arg1 defaultSetting:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLastAccountIdentifier:(NSString *)arg1 ;
-(void)playPostSound;
-(NSString *)accountTypeIdentifier;
@end

