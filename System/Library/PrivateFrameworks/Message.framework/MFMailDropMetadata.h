/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDate;

@interface MFMailDropMetadata : NSObject {

	NSString* _uuid;
	BOOL _autoArchive;
	BOOL _isInvalid;
	NSString* _fileName;
	long long _fileSize;
	NSString* _mimeType;
	NSURL* _directUrl;
	NSURL* _wrappedUrl;
	NSDate* _expiration;
	unsigned long long _flags;

}

@property (nonatomic,copy) NSString * fileName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign) long long fileSize;                                //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                       //@synthesize mimeType=_mimeType - In the implementation block
@property (assign) BOOL autoArchive;                                  //@synthesize autoArchive=_autoArchive - In the implementation block
@property (nonatomic,copy) NSURL * directUrl;                         //@synthesize directUrl=_directUrl - In the implementation block
@property (nonatomic,copy) NSURL * wrappedUrl;                        //@synthesize wrappedUrl=_wrappedUrl - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                       //@synthesize expiration=_expiration - In the implementation block
@property (assign) unsigned long long flags;                          //@synthesize flags=_flags - In the implementation block
@property (setter=setUUID:,getter=UUID) NSString * UUID; 
@property (assign) BOOL isInvalid;                                    //@synthesize isInvalid=_isInvalid - In the implementation block
+(id)mailDropMetadata;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)UUID;
-(NSString *)mimeType;
-(long long)fileSize;
-(void)setFileSize:(long long)arg1 ;
-(BOOL)isBanner;
-(id)directUrlString;
-(BOOL)autoArchive;
-(void)setAutoArchive:(BOOL)arg1 ;
-(NSURL *)directUrl;
-(void)setDirectUrl:(NSURL *)arg1 ;
-(id)wrappedUrlString;
-(NSURL *)wrappedUrl;
-(void)setWrappedUrl:(NSURL *)arg1 ;
-(BOOL)isPhotoArchive;
-(BOOL)isBannerWithMultiple;
-(void)setIsInvalid:(BOOL)arg1 ;
-(BOOL)isInvalid;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)isExpired;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)merge:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)expiration;
@end

