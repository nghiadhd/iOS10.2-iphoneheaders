/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelApplicationDataSource.h>

@protocol SBStarkSessionConfiguring;
@class SBPlatformController, NSString;

@interface SBStarkIconModelApplicationDataSource : NSObject <SBIconModelApplicationDataSource> {

	id<SBStarkSessionConfiguring> _configuration;
	SBPlatformController* _platformController;
	SBPlatformController* platformController;

}

@property (nonatomic,readonly) SBPlatformController * platformController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultIconState;
-(id)firstPageLeafIdentifiers;
-(id)initWithConfiguration:(id)arg1 platformController:(id)arg2 ;
-(SBPlatformController *)platformController;
-(id)allApplications;
-(id)initWithConfiguration:(id)arg1 ;
@end

