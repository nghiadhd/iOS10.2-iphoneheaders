/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCAudioPayload;

@interface VCAudioTier : NSObject {

	unsigned networkBitrate;
	unsigned audioBitrate;
	unsigned packetsPerBundle;
	VCAudioPayload* payload;

}

@property (readonly) unsigned networkBitrate; 
@property (readonly) unsigned audioBitrate; 
@property (readonly) unsigned packetsPerBundle; 
@property (readonly) VCAudioPayload * payload; 
-(id)description;
-(VCAudioPayload *)payload;
-(unsigned)packetsPerBundle;
-(unsigned)networkBitrate;
-(unsigned)audioBitrate;
-(id)initWithNetworkBitrate:(unsigned)arg1 audioBitrate:(unsigned)arg2 packetsPerBundle:(unsigned)arg3 payload:(id)arg4 ;
-(BOOL)isEqualTo:(id)arg1 ;
@end

