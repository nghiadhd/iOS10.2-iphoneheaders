/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVFill : NSObject
+(id)targetFgColorWithManager:(id)arg1 ;
+(void)readGradientFill:(id)arg1 fromManager:(id)arg2 ;
+(id)readBlipRefFromManager:(id)arg1 state:(id)arg2 ;
+(id)targetBgColorWithManager:(id)arg1 ;
+(id)readFromManager:(id)arg1 state:(id)arg2 ;
+(void)addStopsFromArray:(const OAVGradientStop*)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 manager:(id)arg7 ;
+(void)readImageFill:(id)arg1 fromManager:(id)arg2 state:(id)arg3 ;
@end

