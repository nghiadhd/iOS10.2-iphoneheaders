/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class YTVideo, NSString, NSURL;

@interface YTCaptionTrack : NSObject {

	YTVideo* _video;
	NSString* _title;
	NSString* _language;
	NSURL* _captionTrackURL;
	BOOL _speechRecognition;

}

@property (nonatomic,retain) YTVideo * video;                      //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * language;                  //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSURL * captionTrackURL;              //@synthesize captionTrackURL=_captionTrackURL - In the implementation block
@property (assign,nonatomic) BOOL speechRecognition;               //@synthesize speechRecognition=_speechRecognition - In the implementation block
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setVideo:(YTVideo *)arg1 ;
-(YTVideo *)video;
-(void)setCaptionTrackURL:(NSURL *)arg1 ;
-(void)setSpeechRecognition:(BOOL)arg1 ;
-(NSURL *)captionTrackURL;
-(BOOL)speechRecognition;
@end

