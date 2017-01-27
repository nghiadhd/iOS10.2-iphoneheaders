/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRNowPlayingApplicationStateProtobuf, NSString, NSData;

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRNowPlayingApplicationStateProtobuf* _protobuf;

}

@property (nonatomic,copy) NSString * companionBundleIdentifier; 
@property (nonatomic,copy) NSString * watchBundleIdentifier; 
@property (nonatomic,copy) NSString * localizedDisplayName; 
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,copy) NSData * iconDigest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)protobufData;
-(void)setPlaybackState:(unsigned)arg1 ;
-(unsigned)playbackState;
-(NSString *)localizedDisplayName;
-(NSString *)companionBundleIdentifier;
-(void)setCompanionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)watchBundleIdentifier;
-(void)setWatchBundleIdentifier:(NSString *)arg1 ;
-(NSData *)iconDigest;
-(void)setIconDigest:(NSData *)arg1 ;
-(id)initWithProtobufData:(id)arg1 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
@end

