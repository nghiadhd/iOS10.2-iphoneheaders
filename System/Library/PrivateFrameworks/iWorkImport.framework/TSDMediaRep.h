/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledRep.h>

@class CALayer, CAShapeLayer, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

@interface TSDMediaRep : TSDStyledRep {

	BOOL mIsZooming;
	CALayer* mTapToReplaceLayer;
	CAShapeLayer* mMaskLayer;
	CAShapeLayer* mStrokeLayer;
	CALayer* mFrameMaskLayer;
	TSDFrameRep* mFrameRep;
	CGRect mLastPictureFrameLayerRect;

}

@property (nonatomic,readonly) TSDMediaInfo * mediaInfo; 
@property (nonatomic,readonly) TSDMediaLayout * mediaLayout; 
-(void)i_updateFrameRep;
-(TSDMediaLayout *)mediaLayout;
-(BOOL)i_shouldRenderStroke:(id)arg1 ;
-(void)dealloc;
-(BOOL)isPlaceholder;
-(TSDMediaInfo *)mediaInfo;
@end

