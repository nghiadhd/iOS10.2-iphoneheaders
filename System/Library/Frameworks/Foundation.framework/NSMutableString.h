/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSMutableString : NSString
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)stringWithCapacity:(unsigned long long)arg1 ;
-(void)indentBy:(unsigned long long)arg1 ;
-(void)appendPrettyObject:(id)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4 ;
-(void)appendPrettyInt:(int)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4 ;
-(void)appendPrettyBOOL:(BOOL)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4 ;
-(void)appendToStringAtColumnWithContent:(int*)arg1 column:(unsigned char)arg2 content:(const char*)arg3 appendAsNewLine:(BOOL)arg4 addNewLine:(BOOL)arg5 ;
-(void)convertLineEndingsTo:(id)arg1 ;
-(void)appendString:(id)arg1 withSeparator:(id)arg2 ;
-(void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(void)searchAndReplaceInString:(id)arg1 withString:(id)arg2 ;
-(void)_speakThisAppendStringWithPause:(id)arg1 ;
-(void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(void)searchAndReplaceInString:(id)arg1 withString:(id)arg2 ;
-(void)_ICSStripControlChracters;
-(void)_ICSEscapePropertyValue;
-(void)_ICSEscapeParameterValue;
-(void)_ICSEscapeParameterQuotedValue;
-(void)_ICSRemoveCharactersFromSet:(id)arg1 ;
-(void)appendPrettyObject:(id)arg1 withName:(id)arg2 indent:(int)arg3 showFullContent:(BOOL)arg4 ;
-(void)appendPrettyBOOL:(BOOL)arg1 withName:(id)arg2 indent:(int)arg3 ;
-(void)appendPrettyInt:(int)arg1 withName:(id)arg2 indent:(int)arg3 ;
-(void)_cn_deleteCharactersInSet:(id)arg1 ;
-(void)_cn_trimLeadingWhitespace;
-(void)_cn_trimTrailingWhitespace;
-(void)_cn_deleteCharactersInSet:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_cn_appendNonNilString:(id)arg1 ;
-(void)_cn_trim;
-(unsigned long long)_cn_replaceStrings:(id)arg1 ;
-(void)replaceNewlinesWithSpaces;
-(void)standardizeWhitespace;
-(void)addMathIndicators;
-(void)dd_appendSpaces:(unsigned)arg1 ;
-(void)_removeCharactersFromSet:(CFCharacterSetRef)arg1 ;
-(void)_replaceOccurrencesOfCharacter:(unsigned)arg1 withCharacter:(unsigned)arg2 ;
-(void)_removeOccurrencesOfCharacter:(unsigned)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCharacters:(const unsigned short*)arg2 length:(unsigned long long)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCString:(const char*)arg2 length:(unsigned long long)arg3 ;
-(void)_trimWithCharacterSet:(id)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)_cfAppendCString:(const char*)arg1 length:(long long)arg2 ;
-(void)_cfLowercase:(const void*)arg1 ;
-(void)_cfUppercase:(const void*)arg1 ;
-(void)_cfCapitalize:(const void*)arg1 ;
-(void)_cfPad:(CFStringRef)arg1 length:(unsigned)arg2 padIndex:(unsigned)arg3 ;
-(void)_cfTrim:(CFStringRef)arg1 ;
-(void)_cfTrimWS;
-(void)_cfNormalize:(long long)arg1 ;
-(unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(BOOL)applyTransform:(id)arg1 reverse:(BOOL)arg2 range:(NSRange)arg3 updatedRange:(NSRange*)arg4 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(Class)classForCoder;
-(void)setString:(id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

