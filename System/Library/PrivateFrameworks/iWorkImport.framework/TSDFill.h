/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSPropertyCommandSerializing.h>
#import <iWorkImport/TSDPathPainter.h>
#import <iWorkImport/TSSPreset.h>

@class NSString;

@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSDPathPainter, TSSPreset>

@property (nonatomic,readonly) BOOL tsch_hasAllResources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * presetKind; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(void)registerSubclass:(Class)arg1 ;
+(BOOL)tsch_hasAllResourcesForFill:(id)arg1 ;
+(id)p_subclassRegistry;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(NSString *)presetKind;
-(BOOL)isClear;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(BOOL)tsch_hasAllResources;
-(BOOL)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)drawsInOneStep;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(BOOL)canApplyToCALayer;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(BOOL)shouldBeReappliedToCALayer:(id)arg1 ;
-(void)applyToCALayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)isOpaque;
-(id)referenceColor;
-(BOOL)isNearlyWhite;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(int)fillType;
@end

