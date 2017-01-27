/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {

	unsigned _encodeScore;
	unsigned _decodeScore;
	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(BOOL)useSoftFramerateSwitching;
-(void)initSupportedPayloads;
-(void)computeEncodingScore;
-(void)computeDecodingScore;
-(BOOL)setupRules;
-(BOOL)setupH264WifiRules;
-(BOOL)setupH264Rules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 ;
@end

