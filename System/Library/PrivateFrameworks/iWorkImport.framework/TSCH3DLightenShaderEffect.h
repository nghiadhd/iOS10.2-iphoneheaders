/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@interface TSCH3DLightenShaderEffect : TSCH3DShaderEffect
+(tvec4<float>)lightenDiffuseFragmentColor:(const tvec4<float>*)arg1 byPercent:(float)arg2 ;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
@end

