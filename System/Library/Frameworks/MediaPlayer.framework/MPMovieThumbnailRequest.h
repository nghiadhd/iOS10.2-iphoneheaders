/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPMovieThumbnailRequest : NSObject {

	NSArray* _times;
	long long _timeOption;

}

@property (nonatomic,retain) NSArray * times;                   //@synthesize times=_times - In the implementation block
@property (assign,nonatomic) long long timeOption;              //@synthesize timeOption=_timeOption - In the implementation block
-(NSArray *)times;
-(void)setTimes:(NSArray *)arg1 ;
-(long long)timeOption;
-(void)setTimeOption:(long long)arg1 ;
@end

