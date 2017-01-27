/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber, NSDictionary;

@interface SoftwareProperties : NSObject <NSCopying> {

	BOOL _isFromStore;
	NSData* _appReceiptData;
	NSData* _artworkData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	long long _downloadIdentifier;
	NSNumber* _installType;
	NSDictionary* _ITunesMetadata;
	NSData* _newsstandArtworkData;
	NSString* _packagePath;
	NSString* _scratchDirectory;
	NSData* _sinfData;
	NSData* _transitMapData;

}

@property (nonatomic,copy) NSData * appReceiptData;                     //@synthesize appReceiptData=_appReceiptData - In the implementation block
@property (nonatomic,copy) NSData * artworkData;                        //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                    //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * installType;                      //@synthesize installType=_installType - In the implementation block
@property (nonatomic,copy) NSDictionary * ITunesMetadata;               //@synthesize ITunesMetadata=_ITunesMetadata - In the implementation block
@property (assign,nonatomic) BOOL isFromStore;                          //@synthesize isFromStore=_isFromStore - In the implementation block
@property (nonatomic,copy) NSData * newsstandArtworkData;               //@synthesize newsstandArtworkData=_newsstandArtworkData - In the implementation block
@property (nonatomic,copy) NSString * packagePath;                      //@synthesize packagePath=_packagePath - In the implementation block
@property (nonatomic,copy) NSString * scratchDirectory;                 //@synthesize scratchDirectory=_scratchDirectory - In the implementation block
@property (nonatomic,copy) NSData * sinfData;                           //@synthesize sinfData=_sinfData - In the implementation block
@property (nonatomic,copy) NSData * transitMapData;                     //@synthesize transitMapData=_transitMapData - In the implementation block
-(NSDictionary *)ITunesMetadata;
-(NSData *)sinfData;
-(void)setITunesMetadata:(NSDictionary *)arg1 ;
-(NSData *)newsstandArtworkData;
-(void)setNewsstandArtworkData:(NSData *)arg1 ;
-(NSString *)scratchDirectory;
-(void)setScratchDirectory:(NSString *)arg1 ;
-(void)setSinfData:(NSData *)arg1 ;
-(NSData *)transitMapData;
-(void)setTransitMapData:(NSData *)arg1 ;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(NSData *)appReceiptData;
-(void)setInstallType:(NSNumber *)arg1 ;
-(NSNumber *)installType;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSString *)packagePath;
-(void)setPackagePath:(NSString *)arg1 ;
-(long long)downloadIdentifier;
-(void)setAppReceiptData:(NSData *)arg1 ;
-(BOOL)isFromStore;
-(void)setIsFromStore:(BOOL)arg1 ;
@end

