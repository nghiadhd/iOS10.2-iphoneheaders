/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPMediaItemArtwork : NSObject {

	CGSize _bounds;
	/*^block*/id _requestHandler;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect imageCropRect; 
-(id)init;
-(CGRect)bounds;
-(id)initWithImage:(id)arg1 ;
-(id)initWithBoundsSize:(CGSize)arg1 requestHandler:(/*^block*/id)arg2 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)jpegDataWithSize:(CGSize)arg1 ;
-(id)pngDataWithSize:(CGSize)arg1 ;
-(CGRect)imageCropRect;
@end

