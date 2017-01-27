/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DATrustHandler;


@protocol DARefreshManagerDelegate
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@optional
-(id)username;
-(id)serverTokenRegistrationURL;
-(void)interfaceWentUp;
-(void)interfaceWentDown;
-(id)password;

@required
-(DATrustHandler *)trustHandler;
-(id)scheduleIdentifier;
-(id)onBehalfOfBundleIdentifier;
-(id)getDAAccount;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2;

@end

