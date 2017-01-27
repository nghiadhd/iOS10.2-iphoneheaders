/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UITextSuggestion : TIKeyboardCandidate <NSCopying> {

	BOOL __shouldPersist;
	NSString* _inputText;
	NSString* _searchText;
	NSString* _displayText;
	NSString* _headerText;

}

@property (nonatomic,readonly) BOOL _shouldPersist;                    //@synthesize _shouldPersist=__shouldPersist - In the implementation block
@property (nonatomic,copy,readonly) NSString * inputText;              //@synthesize inputText=_inputText - In the implementation block
@property (nonatomic,copy) NSString * searchText;                      //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSString * displayText;                     //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * headerText;                      //@synthesize headerText=_headerText - In the implementation block
+(id)textSuggestionWithInputText:(id)arg1 ;
+(id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2 ;
-(void)dealloc;
-(id)input;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)candidate;
-(NSString *)inputText;
-(NSString *)searchText;
-(NSString *)headerText;
-(NSString *)displayText;
-(id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(void)setHeaderText:(NSString *)arg1 ;
-(BOOL)_shouldPersist;
@end

