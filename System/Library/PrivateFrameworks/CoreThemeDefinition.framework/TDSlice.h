/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class TDElementProduction, TDRenditionSpec, NSString;

@interface TDSlice : NSManagedObject {

	CGRect _sliceRect;

}

@property (nonatomic,retain) TDElementProduction * production; 
@property (nonatomic,retain) TDRenditionSpec * rendition; 
@property (assign,nonatomic) CGRect sliceRect; 
@property (assign,nonatomic) CGRect primitiveSliceRect; 
@property (nonatomic,retain) NSString * sliceRectString; 
-(void)awakeFromFetch;
-(CGRect)primitiveSliceRect;
-(void)setPrimitiveSliceRect:(CGRect)arg1 ;
-(void)setSliceRect:(CGRect)arg1 ;
-(CGRect)sliceRect;
@end

