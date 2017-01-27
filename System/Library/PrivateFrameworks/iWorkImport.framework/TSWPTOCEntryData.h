/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSString, TSWPParagraphStyle, TSWPListStyle;

@interface TSWPTOCEntryData : TSPObject <TSPCopying> {

	int _numberFormat;
	unsigned long long _paragraphIndex;
	unsigned long long _pageNumber;
	NSString* _heading;
	TSWPParagraphStyle* _indexedStyle;
	TSWPListStyle* _indexedListStyle;
	unsigned long long _indexedListStart;
	unsigned long long _indexedParagraphLevel;

}

@property (nonatomic,readonly) unsigned long long paragraphIndex;                     //@synthesize paragraphIndex=_paragraphIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long pageNumber;                         //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,readonly) int numberFormat;                                      //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,readonly) NSString * heading;                                    //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) TSWPParagraphStyle * indexedStyle;                     //@synthesize indexedStyle=_indexedStyle - In the implementation block
@property (nonatomic,readonly) TSWPListStyle * indexedListStyle;                      //@synthesize indexedListStyle=_indexedListStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long indexedListStart;                   //@synthesize indexedListStart=_indexedListStart - In the implementation block
@property (nonatomic,readonly) unsigned long long indexedParagraphLevel;              //@synthesize indexedParagraphLevel=_indexedParagraphLevel - In the implementation block
+(id)tocEntryDataWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8 ;
-(unsigned long long)paragraphIndex;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(TOCEntryInstanceArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TOCEntryInstanceArchive*)arg1 unarchiver:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPParagraphStyle *)indexedStyle;
-(TSWPListStyle *)indexedListStyle;
-(unsigned long long)indexedParagraphLevel;
-(unsigned long long)indexedListStart;
-(id)initWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)heading;
-(unsigned long long)pageNumber;
-(int)numberFormat;
@end

