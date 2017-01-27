/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@class NSMutableString, NSDictionary;

@interface __NSLocalizedString : NSMutableString {

	NSMutableString* original;
	NSDictionary* config;

}
-(id)formatConfiguration;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2 ;
-(id)baseString;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setString:(id)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(const unsigned short*)_fastCharacterContents;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

