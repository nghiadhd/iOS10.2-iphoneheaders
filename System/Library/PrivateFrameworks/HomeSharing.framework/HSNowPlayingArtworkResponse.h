/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse {

	NSData* _artworkData;
	NSString* _artworkMIMEType;

}

@property (nonatomic,retain) NSData * artworkData;                    //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,retain) NSString * artworkMIMEType;              //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setArtworkMIMEType:(NSString *)arg1 ;
-(NSString *)artworkMIMEType;
@end

