/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject {

	TSDStroke* mHorizontalStroke;
	TSDStroke* mVerticalStroke;
	TSDStroke* mExteriorStroke;
	unsigned mVisibleMask;

}

@property (nonatomic,retain) TSDStroke * horizontalStroke; 
@property (nonatomic,retain) TSDStroke * verticalStroke; 
@property (nonatomic,retain) TSDStroke * exteriorStroke; 
@property (assign,nonatomic) unsigned mask; 
-(void)saveToArchive:(StrokePresetDataArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const StrokePresetDataArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithMask:(unsigned)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4 ;
-(id)initWithDeprecatedArchive:(const Deprecated_StrokePresetDataArchive*)arg1 unarchiver:(id)arg2 ;
-(TSDStroke *)horizontalStroke;
-(TSDStroke *)verticalStroke;
-(TSDStroke *)exteriorStroke;
-(void)setHorizontalStroke:(TSDStroke *)arg1 ;
-(void)setVerticalStroke:(TSDStroke *)arg1 ;
-(void)setExteriorStroke:(TSDStroke *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)mask;
-(void)setMask:(unsigned)arg1 ;
@end

