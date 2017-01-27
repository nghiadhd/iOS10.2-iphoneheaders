/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoCodec, HMDVideoCodecParameters, NSArray;

@interface HMDVideoCodecConfiguration : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	HMDVideoCodec* _videoCodec;
	HMDVideoCodecParameters* _codecParameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDVideoCodec * videoCodec;                             //@synthesize videoCodec=_videoCodec - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                              //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDVideoCodec *)videoCodec;
-(HMDVideoCodecParameters *)codecParameters;
-(NSArray *)videoAttributes;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 attributes:(id)arg3 ;
@end

