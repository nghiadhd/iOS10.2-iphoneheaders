/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface FCVideoManifest : NSObject {

	NSURL* _videoURL;
	NSString* _articleID;

}

@property (nonatomic,copy) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                //@synthesize videoURL=_videoURL - In the implementation block
-(id)init;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id)initWithArticleID:(id)arg1 videoURL:(id)arg2 ;
@end

