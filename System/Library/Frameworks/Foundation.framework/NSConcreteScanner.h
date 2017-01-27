/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScanner.h>

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {

	NSString* scanString;
	NSCharacterSet* skipSet;
	NSCharacterSet* invertedSkipSet;
	id locale;
	unsigned long long scanLocation;
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	}  flags;

}
-(id)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(id)_invertedSkipSet;
-(void)dealloc;
-(id)string;
-(void)setLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)locale;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(void)setCharactersToBeSkipped:(id)arg1 ;
-(unsigned long long)scanLocation;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)scanInt:(int*)arg1 ;
@end

