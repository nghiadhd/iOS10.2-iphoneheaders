/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedRenditionInfo : NSObject {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(BOOL)isEqualToNamedRenditionInfo:(id)arg1 ;
-(id)_initWithKeyFormat:(const renditionkeyfmt*)arg1 andBitmap:(void*)arg2 ;
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)archivedData;
-(id)bitwiseAndWith:(id)arg1 ;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned long long)numberOfBitsSet;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

