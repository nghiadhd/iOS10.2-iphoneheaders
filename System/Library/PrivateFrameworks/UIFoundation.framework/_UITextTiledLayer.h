/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@interface _UITextTiledLayer : CALayer {

	NSMutableArray* _visibleTiles;
	NSMutableArray* _unusedTiles;
	CGRect _gridBounds;
	CGSize _tileSize;
	struct {
		unsigned disableTiling : 1;
		unsigned ditchAllTiles : 1;
		unsigned suspendLayout : 4;
	}  _tcTiledLayerFlags;

}

@property (assign,nonatomic) BOOL usesTiledLayers; 
-(void)drawDirtyLayer:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)_setUsesTiledLayers:(BOOL)arg1 onlyHiding:(BOOL)arg2 ;
-(id)_preparedTileForFrame:(CGRect)arg1 ;
-(void)_prepareGridForBounds:(CGRect)arg1 ;
-(void)_prepareTilesForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)layoutSublayers;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(void)suspendTiling;
-(void)resumeTiling;
-(void)setUsesTiledLayers:(BOOL)arg1 ;
-(BOOL)usesTiledLayers;
@end

