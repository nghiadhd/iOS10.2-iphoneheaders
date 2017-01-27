/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RPPictureInPictureWindow;

@interface RPPictureInPictureController : NSObject {

	RPPictureInPictureWindow* _pictureInPictureWindow;

}

@property (nonatomic,retain) RPPictureInPictureWindow * pictureInPictureWindow;              //@synthesize pictureInPictureWindow=_pictureInPictureWindow - In the implementation block
+(id)sharedController;
-(void)setPictureInPictureWindow:(RPPictureInPictureWindow *)arg1 ;
-(void)showPictureInPictureWindowWithContentView:(id)arg1 ;
-(void)hidePictureInPictureWindow;
-(RPPictureInPictureWindow *)pictureInPictureWindow;
@end

