/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject {

	NSMutableDictionary* _attributes;

}
-(BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)extendedAttributeForName:(id)arg1 ;
-(void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2 ;
-(id)initWithPath:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAttributes:(id)arg1 ;
-(id)allAttributes;
@end

