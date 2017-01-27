/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView {

	BOOL _hasImage;
	id _surface;

}

@property (nonatomic,__weak,readonly) id surface; 
-(id)_initWithFrame:(CGRect)arg1 ;
-(void)_addBlackBackground;
-(id)_initWithView:(id)arg1 screen:(id)arg2 needsBlackBackground:(BOOL)arg3 ;
-(id)initWithContextHostView:(id)arg1 screen:(id)arg2 ;
-(id)initWithContainingBounds:(CGRect)arg1 contentFrame:(CGRect)arg2 statusBarFrame:(CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 doubleHeightStatusBar:(BOOL)arg6 preventSplit:(BOOL)arg7 needsZoomFilter:(BOOL)arg8 asyncDecodeImage:(BOOL)arg9 forJail:(BOOL)arg10 ;
-(id)initWithImage:(id)arg1 screen:(id)arg2 opaque:(BOOL)arg3 ;
-(id)initWithView:(id)arg1 containingContextHostSnapshot:(id)arg2 screen:(id)arg3 ;
-(id)surface;
@end

