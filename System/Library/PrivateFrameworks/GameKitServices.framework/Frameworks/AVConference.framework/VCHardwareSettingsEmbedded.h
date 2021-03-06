/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsEmbeddedProtocol.h>

@class NSString;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {

	NSString* _deviceName;
	int _screenWidth;
	int _screenHeight;
	int _deviceClass;
	long long _chipId;
	long long _videoEncoderType;

}

@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) int screenWidth; 
@property (nonatomic,readonly) int screenHeight; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) long long chipId; 
@property (nonatomic,readonly) long long videoEncoderType; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(int)screenHeight;
-(int)screenWidth;
-(void)initializeScreenDimension;
-(long long)chipId;
-(long long)videoEncoderType;
-(BOOL)useSoftFramerateSwitching;
-(NSString *)deviceName;
-(long long)deviceClass;
@end

