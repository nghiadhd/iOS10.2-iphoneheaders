/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKey:(long long)arg1 ;
-(void)removeObjectForKey:(long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueEnumerator;
-(CFDictionaryRef)p_cfDictionary;
@end

