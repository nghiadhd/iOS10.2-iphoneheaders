/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {

	WDDocument* mDocument;
	WDListLevel* mListLevel;
	unsigned char mLevel;
	long long mStartNumber;
	BOOL mStartNumberOverridden;

}
-(void)dealloc;
-(id)description;
-(unsigned char)level;
-(BOOL)isListLevelOverridden;
-(id)listLevel;
-(long long)startNumber;
-(void)setStartNumber:(long long)arg1 ;
-(id)mutableListLevel;
-(id)initWithDocument:(id)arg1 level:(unsigned char)arg2 ;
-(BOOL)isStartNumberOverridden;
@end

