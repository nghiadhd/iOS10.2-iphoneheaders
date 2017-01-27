/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PublishingBundles/PublishToYouTube.bundle/PublishToYouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTFeedRequest.h>
#import <libobjc.A.dylib/PLDataArrayInputStreamProgressDelegate.h>

@class NSString;

@interface PublishToYouTubePost : YTFeedRequest <PLDataArrayInputStreamProgressDelegate> {

	BOOL _responseIndicatesAuthenticationFailure;
	NSString* _publishedVideoShortID;
	BOOL _allowsCellularAccessForUploads;

}

@property (assign,nonatomic) BOOL allowsCellularAccessForUploads;              //@synthesize allowsCellularAccessForUploads=_allowsCellularAccessForUploads - In the implementation block
+(id)_videoResourceDictionaryWithTitle:(id)arg1 description:(id)arg2 tags:(id)arg3 category:(id)arg4 privacyStatus:(id)arg5 ;
+(id)_publishURL;
-(int)parseData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)didParseData;
-(void)dataArrayInputStreamBytesWereRead:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)setAllowsCellularAccessForUploads:(BOOL)arg1 ;
-(void)uploadVideoAtPath:(id)arg1 title:(id)arg2 description:(id)arg3 tags:(id)arg4 category:(id)arg5 privacyStatus:(id)arg6 ;
-(BOOL)allowsCellularAccessForUploads;
@end

