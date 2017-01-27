/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@protocol YTCaptionTrackRequestDelegate;
@class YTCaptionTrack;

@interface YTCaptionTrackRequest : YTXMLHTTPRequest {

	id<YTCaptionTrackRequestDelegate> _delegate;
	YTCaptionTrack* _captionTrack;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(void)_requestCaptionTrackDataWithURL:(id)arg1 ;
-(id)initCaptionTrackDataRequest:(id)arg1 withDelegate:(id)arg2 ;
-(id)captionTrack;
@end

