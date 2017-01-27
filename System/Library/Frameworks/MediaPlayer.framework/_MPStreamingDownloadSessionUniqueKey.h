/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MPStreamingDownloadSessionUniqueKey : NSObject {

	BOOL _allowForeignAssetPlayback;
	NSString* _buyParameters;
	long long _storeAdamID;

}

@property (assign,nonatomic) BOOL allowForeignAssetPlayback;              //@synthesize allowForeignAssetPlayback=_allowForeignAssetPlayback - In the implementation block
@property (nonatomic,copy) NSString * buyParameters;                      //@synthesize buyParameters=_buyParameters - In the implementation block
@property (assign,nonatomic) long long storeAdamID;                       //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStoreAdamID:(long long)arg1 ;
-(long long)storeAdamID;
-(BOOL)allowForeignAssetPlayback;
-(void)setAllowForeignAssetPlayback:(BOOL)arg1 ;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
@end

