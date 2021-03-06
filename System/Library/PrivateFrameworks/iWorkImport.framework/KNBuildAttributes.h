/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationAttributes.h>

@interface KNBuildAttributes : KNAnimationAttributes
+(id)attributeValueForProperty:(id)arg1 value:(id)arg2 ;
+(id)supportedCustomAttributes;
+(BOOL)customAttributeKeyIsValid:(id)arg1 ;
+(id)defaultAttributesForEffect:(id)arg1 buildType:(long long)arg2 ;
-(void)encodeToArchive:(BuildAttributesArchive*)arg1 ;
-(id)attributeValueForProperty:(id)arg1 ;
-(void)p_readSharedAttributesForArchive:(AnimationAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(void)p_readTEFAttributesForArchive:(const BuildAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(void)p_readBuildAttributesForArchive:(const BuildAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(void)p_writeSharedAttributesToArchive:(BuildAttributesArchive*)arg1 ;
-(void)p_writeBuildAttributesToArchive:(BuildAttributesArchive*)arg1 ;
-(void)p_setUnsafeDirection:(unsigned long long)arg1 onAttributes:(id)arg2 ;
-(id)initFromBuildAttributesArchive:(const BuildAttributesArchive*)arg1 ;
@end

