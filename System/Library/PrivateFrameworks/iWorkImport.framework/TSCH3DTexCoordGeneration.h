/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DNormalDirectionMapper;

@interface TSCH3DTexCoordGeneration : NSObject {

	tmat4x4<float> mTransform;
	TSCH3DNormalDirectionMapper* mNormalDirectionMapper;

}

@property (nonatomic,retain) TSCH3DNormalDirectionMapper * normalDirectionMapper; 
-(TSCH3DNormalDirectionMapper *)normalDirectionMapper;
-(void)setNormalDirectionMapper:(TSCH3DNormalDirectionMapper *)arg1 ;
-(id)initWithTransform:(const tmat4x4<float>*)arg1 ;
-(id)init;
-(void)dealloc;
@end

