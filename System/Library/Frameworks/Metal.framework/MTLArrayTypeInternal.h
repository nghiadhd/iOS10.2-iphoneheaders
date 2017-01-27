/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArrayType.h>

@interface MTLArrayTypeInternal : MTLArrayType {

	unsigned _arrayLength : 32;
	unsigned _stride : 32;
	id _details;
	unsigned long long _elementType;

}
-(id)describe;
-(id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 details:(id)arg4 ;
-(id)elementStructType;
-(id)elementArrayType;
-(void)dealloc;
-(unsigned long long)elementType;
-(unsigned long long)stride;
-(unsigned long long)arrayLength;
@end

