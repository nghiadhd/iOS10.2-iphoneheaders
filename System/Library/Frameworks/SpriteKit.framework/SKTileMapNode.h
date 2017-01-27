/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class SKTileSet, NSString, UIColor, SKShader, NSDictionary;

@interface SKTileMapNode : SKNode <NSCopying, NSCoding> {

	SKCTileMapNode* _skcTileMapNode;
	SKTileSet* _tileSet;
	CGSize _tileSize;
	 _isoOrigin;
	 _isoColumnVector;
	 _isoRowVector;
	float _isoColumnWidth;
	float _isoRowHeight;
	float _isoHeightScalar;
	float _hexRadius;
	BOOL _enableAutomapping;
	NSString* _tileSetName;

}

@property (nonatomic,retain) NSString * tileSetName;                          //@synthesize tileSetName=_tileSetName - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns; 
@property (assign,nonatomic) unsigned long long numberOfRows; 
@property (assign,nonatomic) CGSize tileSize; 
@property (nonatomic,readonly) CGSize mapSize; 
@property (nonatomic,retain) SKTileSet * tileSet; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,retain) SKShader * shader; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (assign,nonatomic) unsigned lightingBitMask; 
@property (assign,nonatomic) BOOL enableAutomapping; 
+(id)tileMapNodesWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 fromNoiseMap:(id)arg5 tileTypeNoiseMapThresholds:(id)arg6 ;
+(id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 ;
+(id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 fillWithTileGroup:(id)arg5 ;
+(id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 tileGroupLayout:(id)arg5 ;
-(id)init;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(unsigned long long)numberOfColumns;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)alpha;
-(CGPoint)anchorPoint;
-(unsigned long long)numberOfRows;
-(void)setTileSize:(CGSize)arg1 ;
-(void)removeAllTiles;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(CGSize)tileSize;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(SKTileSet *)tileSet;
-(void)setTileSet:(SKTileSet *)arg1 ;
-(CGSize)mapSize;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(id)tileDefinitionForTileID:(unsigned)arg1 ;
-(void)setColumns:(unsigned long long)arg1 andRows:(long long)arg2 ;
-(void)calculateSize;
-(void)rebuildTileSprites;
-(BOOL)shouldUnarchiveTileSet;
-(void)setTileSetName:(NSString *)arg1 ;
-(NSString *)tileSetName;
-(void)setLightingBitMask:(unsigned)arg1 ;
-(double)colorBlendFactor;
-(unsigned)lightingBitMask;
-(void)setStartData:(unsigned long long)arg1 rows:(unsigned long long)arg2 tileSize:(CGSize)arg3 tileSet:(id)arg4 ;
-(void)fillWithTileGroup:(id)arg1 ;
-(id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 ;
-(id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 fillWithTileGroup:(id)arg5 ;
-(id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 tileGroupLayout:(id)arg5 ;
-(void)updateTileGroupsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 ;
-(void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 ;
-(unsigned)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2 ;
-(BOOL)enableAutomapping;
-(void)setEnableAutomapping:(BOOL)arg1 ;
-(void)setRawTiles:(unsigned*)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 ;
-(void)fillWithTileDefinition:(id)arg1 ;
-(id)tileDefinitionAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(id)tileGroupAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(void)setTileGroup:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 ;
-(void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 ;
-(void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 ;
-(void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 ;
-(void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2 ;
-(void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3 ;
-(void)validateAllTiles;
-(void)fillArrayWithTiles:(unsigned*)arg1 ;
-(void)fillArray:(unsigned*)arg1 withTilesFromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(void)setTilesFromArray:(unsigned*)arg1 ;
-(void)setTilesFromArray:(unsigned*)arg1 fromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(void)clearModifiedTileTracking;
-(void)getTileModifiedData:(long long*)arg1 outMinRowModified:(long long*)arg2 outMaxColumnModified:(long long*)arg3 outmaxRowModified:(long long*)arg4 ;
-(unsigned long long)tileColumnIndexFromPosition:(CGPoint)arg1 ;
-(unsigned long long)tileRowIndexFromPosition:(CGPoint)arg1 ;
-(CGPoint)centerOfTileAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(id)createTileStampFromColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 withWidth:(unsigned long long)arg3 height:(unsigned long long)arg4 addToTileSet:(BOOL)arg5 ;
-(void)applyTileStamp:(id)arg1 inColumn:(long long)arg2 row:(long long)arg3 ;
-(void)forceRedraw;
-(void)setColorBlendFactor:(double)arg1 ;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
@end

