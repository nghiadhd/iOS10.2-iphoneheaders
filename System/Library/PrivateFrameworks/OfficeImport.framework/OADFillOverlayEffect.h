/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADEffect.h>

@class OADFill;

@interface OADFillOverlayEffect : OADEffect {

	int mBlendMode;
	OADFill* mFill;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)fill;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setFill:(id)arg1 ;
@end

