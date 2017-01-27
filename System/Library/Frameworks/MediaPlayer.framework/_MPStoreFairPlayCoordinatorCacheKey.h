/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface _MPStoreFairPlayCoordinatorCacheKey : NSObject {

	long long _SAPVersion;
	NSURL* _mescalCertificateURL;
	NSURL* _mescalPrimingURL;
	NSURL* _mescalSetupURL;

}

@property (assign,setter=APVersion,nonatomic) long long SAPVersion;              //@synthesize SAPVersion=_SAPVersion - In the implementation block
@property (nonatomic,copy) NSURL * mescalCertificateURL;                         //@synthesize mescalCertificateURL=_mescalCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * mescalPrimingURL;                             //@synthesize mescalPrimingURL=_mescalPrimingURL - In the implementation block
@property (nonatomic,copy) NSURL * mescalSetupURL;                               //@synthesize mescalSetupURL=_mescalSetupURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSAPVersion:(long long)arg1 ;
-(NSURL *)mescalCertificateURL;
-(void)setMescalCertificateURL:(NSURL *)arg1 ;
-(NSURL *)mescalPrimingURL;
-(void)setMescalPrimingURL:(NSURL *)arg1 ;
-(NSURL *)mescalSetupURL;
-(void)setMescalSetupURL:(NSURL *)arg1 ;
-(long long)SAPVersion;
@end
