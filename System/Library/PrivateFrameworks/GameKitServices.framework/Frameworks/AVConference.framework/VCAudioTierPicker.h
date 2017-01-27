/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, VCAudioTier, NSArray;

@interface VCAudioTierPicker : NSObject {

	NSMutableArray* audioTiers;
	BOOL isUsingCellular;
	VCAudioTier* defaultTier;
	VCAudioTier* fallbackTier;
	int mode;

}

@property (readonly) VCAudioTier * defaultTier; 
@property (readonly) VCAudioTier * fallbackTier; 
@property (readonly) NSArray * audioTiers; 
+(BOOL)shouldFilterTierForPayload:(id)arg1 bitRate:(unsigned)arg2 packetsPerBundle:(unsigned)arg3 cellular:(BOOL)arg4 operatingMode:(int)arg5 ;
-(void)dealloc;
-(NSArray *)audioTiers;
-(id)initWithOperatingMode:(int)arg1 payloads:(id)arg2 sampleRate:(unsigned)arg3 packetsPerBundle:(id)arg4 headerSize:(unsigned)arg5 usingCellular:(BOOL)arg6 defaultMaxCap:(unsigned)arg7 ;
-(VCAudioTier *)defaultTier;
-(id)tierForNetworkBitrate:(unsigned)arg1 duplication:(unsigned)arg2 ;
-(id)newTierForPayload:(id)arg1 bitrate:(unsigned)arg2 sampleRate:(unsigned)arg3 packetsPerBundle:(unsigned)arg4 headerSize:(unsigned)arg5 ;
-(unsigned long long)LargestCapTier:(unsigned)arg1 ;
-(id)AudioTier:(unsigned)arg1 ;
-(VCAudioTier *)fallbackTier;
@end

