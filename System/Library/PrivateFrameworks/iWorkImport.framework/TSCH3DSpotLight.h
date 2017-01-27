/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLight.h>
#import <iWorkImport/TSCH3DLightPositionable.h>
#import <iWorkImport/TSCH3DLightDirectional.h>

@class TSCH3DVector;

@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightPositionable, TSCH3DLightDirectional> {

	TSCH3DVector* _position;
	TSCH3DVector* _direction;
	float _cutOff;
	float _dropOff;

}

@property (assign,nonatomic) tvec3<float> position; 
@property (assign,nonatomic) tvec3<float> direction; 
@property (assign,nonatomic) float cutOff;                        //@synthesize cutOff=_cutOff - In the implementation block
@property (assign,nonatomic) float dropOff;                       //@synthesize dropOff=_dropOff - In the implementation block
+(id)instanceWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
+(Class)effectClass;
-(void)saveToArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(float)cutOff;
-(float)dropOff;
-(void)setCutOff:(float)arg1 ;
-(void)setDropOff:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(tvec3<float>)arg1 ;
-(tvec3<float>)position;
-(void)setDirection:(tvec3<float>)arg1 ;
-(tvec3<float>)direction;
@end

